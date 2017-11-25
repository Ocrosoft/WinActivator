#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QVector>
#include <QString>
#include <QProcess>
#include <QStringList>
#include <QMainWindow>
#include <QMessageBox>
#include <QScrollBar>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

public slots:
    void activate();
    void viewCode();
    void onReceiveMessageFromChildThread(int,QString);
    void about();

private:
    Ui::MainWindow *ui;
    QStringList list;
};

#endif // MAINWINDOW_H
