#ifndef NEWTHREAD_H
#define NEWTHREAD_H
#include <QThread>
#include <QString>
#include <QVector>
#include <QProcess>
#include <QRegExp>
#include <QStringList>
#include <QMessageBox>


class NewThread : public QThread
{
    Q_OBJECT

signals:
    void sendMessageToMainThread(int,QString);

public:
    NewThread(QVector<QStringList> command,QVector<QString> successfulMessage)
    {
        this->command=command;
        this->successfulMessage=successfulMessage;
    }

    void run()
    {
        std::pair<int,QString> res;
        for(int i=0;i<command.length();i++)
        {
            res=shell(command[i],successfulMessage[i]);
            if(res.first)emit sendMessageToMainThread(1,res.second);
            else
            {
                emit sendMessageToMainThread(-1,res.second);
                return;
            }
        }
        emit sendMessageToMainThread(0,"");
        return;
    }

    std::pair<int,QString> shell(QStringList command,QString successfulMessage)
    {
        auto p=new QProcess();
        p->start("cscript",command);
        p->waitForStarted();
        if(p->waitForFinished())
        {
            auto res=QString::fromLocal8Bit(p->readAllStandardOutput());
            res=res.replace(QRegExp("Microsoft.*保留所有权利。"),"");
            res=res.replace("---Processing--------------------------","");
            res=res.replace("---------------------------------------","");
            res=res.replace("---Exiting-----------------------------","");
            res=res.replace(QRegExp("Installing.*xrm-ms"),"");
            res=res.trimmed();
            if(res.indexOf(successfulMessage)!=-1)return std::make_pair(true,res);
            else return std::make_pair(false,res);
        }
        else return std::make_pair(false,"Run script faild.");
    }

private:
    QVector<QStringList> command;
    QVector<QString> successfulMessage;
};

#endif // NEWTHREAD_H
