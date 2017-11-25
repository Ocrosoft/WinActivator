#include "newthread.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    list = QStringList()
            <<"Windows Server 2016 Datacenter"
           <<"Windows Server 2016 Standard"
          <<"Windows Server 2016 Essentials"
         <<"------------------------"
        <<"Windows 10 Professional"
       <<"Windows 10 Professional N"
      <<"Windows 10 Enterprise"
     <<"Windows 10 Enterprise N"
    <<"Windows 10 Education"
    <<"Windows 10 Education N"
    <<"Windows 10 Enterprise 2015 LTSB"
    <<"Windows 10 Enterprise 2015 LTSB N"
    <<"Windows 10 Enterprise 2016 LTSB"
    <<"Windows 10 Enterprise 2016 LTSB N"
    <<"------------------------"
    <<"Windows 8.1 Professional"
    <<"Windows 8.1 Professional N"
    <<"Windows 8.1 Enterprise"
    <<"Windows 8.1 Enterprise N"
    <<"Windows Server 2012 R2 Server Standard"
    <<"Windows Server 2012 R2 Datacenter"
    <<"Windows Server 2012 R2 Essentials"
    <<"------------------------"
    <<"Windows 8 Professional"
    <<"Windows 8 Professional N"
    <<"Windows 8 Enterprise"
    <<"Windows 8 Enterprise N"
    <<"Windows Server 2012"
    <<"Windows Server 2012 N"
    <<"Windows Server 2012 Single Language"
    <<"Windows Server 2012 Country Specific"
    <<"Windows Server 2012 Server Standard"
    <<"Windows Server 2012 MultiPoint Standard"
    <<"Windows Server 2012 MultiPoint Premium"
    <<"Windows Server 2012 Datacenter"
    <<"------------------------"
    <<"Windows 7 Professional"
    <<"Windows 7 Professional N"
    <<"Windows 7 Professional E"
    <<"Windows 7 Enterprise"
    <<"Windows 7 Enterprise N"
    <<"Windows 7 Enterprise E"
    <<"Windows Server 2008 R2 Web"
    <<"Windows Server 2008 R2 HPC edition"
    <<"Windows Server 2008 R2 Standard"
    <<"Windows Server 2008 R2 Enterprise"
    <<"Windows Server 2008 R2 Datacenter"
    <<"Windows Server 2008 R2 for Itanium-based Systems"
    <<"------------------------"
    <<"Windows Vista Business"
    <<"Windows Vista Business N"
    <<"Windows Vista Enterprise"
    <<"Windows Vista Enterprise N"
    <<"Windows Web Server 2008"
    <<"Windows Server 2008 Standard"
    <<"Windows Server 2008 Standard without Hyper-V"
    <<"Windows Server 2008 Enterprise"
    <<"Windows Server 2008 Enterprise without Hyper-V"
    <<"Windows Server 2008 HPC"
    <<"Windows Server 2008 Datacenter"
    <<"Windows Server 2008 Datacenter without Hyper-V"
    <<"Windows Server 2008 for Itanium-Based Systems"
    <<"------------------------"
    <<"Office Professional Plus 2016 - ProPlus"
    <<"Office Standard 2016 - Standard"
    <<"Project Professional 2016 - ProjectPro"
    <<"Project Standard 2016 - ProjectStd"
    <<"Visio Professional 2016 - VIsioPro"
    <<"Visio Standard 2016 - VisioStd"
    <<"Access 2016 - Access"
    <<"Excel 2016 - Excel"
    <<"OneNote 2016 - OneNote"
    <<"Outlook 2016 - Outlook"
    <<"PowerPoint 2016 - PowerPoint"
    <<"Publisher 2016 - Publisher"
    <<"Skype for Business 2016 - SkypeforBusiness"
    <<"Word 2016 - Word";

    ui->comboBox->addItems(list);
    list = QStringList()
            <<"CB7KF-BWN84-R7R2Y-793K2-8XDDG"
           <<"WC2BQ-8NRM3-FDDYY-2BFGV-KHKQY"
          <<"JCKRF-N37P4-C2D82-9YXRT-4M63B"
         <<"------------------------"
        <<"W269N-WFGWX-YVC9B-4J6C9-T83GX"
       <<"MH37W-N47XK-V7XM9-C7227-GCQG9"
      <<"NPPR9-FWDCX-D2C8J-H872K-2YT43"
     <<"DPH2V-TTNVB-4X9Q3-TJR4H-KHJW4"
    <<"NW6C2-QMPVW-D7KKK-3GKT6-VCFB2"
    <<"2WH4N-8QGBV-H22JP-CT43Q-MDWWJ"
    <<"WNMTR-4C88C-JK8YV-HQ7T2-76DF9"
    <<"2F77B-TNFGY-69QQF-B8YKP-D69TJ"
    <<"DCPHK-NFMTC-H88MJ-PFHPY-QJ4BJ"
    <<"QFFDN-GRT3P-VKWWX-X7T3R-8B639"
    <<"------------------------"
    <<"GCRJD-8NW9H-F2CDX-CCM8D-9D6T9"
    <<"HMCNV-VVBFX-7HMBH-CTY9B-B4FXY"
    <<"MHF9N-XY6XB-WVXMC-BTDCT-MKKG7"
    <<"TT4HM-HN7YT-62K67-RGRQJ-JFFXW"
    <<"D2N9P-3P6X9-2R39C-7RTCD-MDVJX"
    <<"W3GGN-FT8W3-Y4M27-J84CP-Q3VJ9"
    <<"KNC87-3J2TX-XB4WP-VCPJV-M4FWM"
    <<"------------------------"
    <<"NG4HW-VH26C-733KW-K6F98-J8CK4"
    <<"XCVCF-2NXM9-723PB-MHCB7-2RYQQ"
    <<"32JNW-9KQ84-P47T8-D8GGY-CWCK7"
    <<"JMNMF-RHW7P-DMY6X-RF3DR-X2BQT"
    <<"BN3D2-R7TKB-3YPBD-8DRP2-27GG4"
    <<"8N2M2-HWPGY-7PGT9-HGDD8-GVGGY"
    <<"2WN2H-YGCQR-KFX6K-CD6TF-84YXQ"
    <<"4K36P-JN4VD-GDC6V-KDT89-DYFKP"
    <<"XC9B7-NBPP2-83J2H-RHMBY-92BT4"
    <<"HM7DN-YVMH3-46JC3-XYTG7-CYQJJ"
    <<"XNH6W-2V9GX-RGJ4K-Y8X6F-QGJ2G"
    <<"48HP8-DN98B-MYWDG-T2DCC-8W83P"
    <<"------------------------"
    <<"FJ82H-XT6CR-J8D7P-XQJJ2-GPDD4"
    <<"MRPKT-YTG23-K7D7T-X2JMM-QY7MG"
    <<"W82YF-2Q76Y-63HXB-FGJG9-GF7QX"
    <<"33PXH-7Y6KF-2VJC9-XBBR8-HVTHH"
    <<"YDRBP-3D83W-TY26F-D46B2-XCKRJ"
    <<"C29WB-22CC8-VJ326-GHFJW-H9DH4"
    <<"6TPJF-RBVHG-WBW2R-86QPH-6RTM4"
    <<"TT8MH-CG224-D3D7Q-498W2-9QCTX"
    <<"YC6KT-GKW9T-YTKYR-T4X34-R7VHC"
    <<"489J6-VHDMP-X63PK-3K798-CPX3Y"
    <<"74YFP-3QFB3-KQT8W-PMXWJ-7M648"
    <<"GT63C-RJFQ3-4GMB6-BRFB9-CB83V"
    <<"------------------------"
    <<"YFKBB-PQJJV-G996G-VWGXY-2V3X8"
    <<"HMBQG-8H2RH-C77VX-27R82-VMQBT"
    <<"VKK3X-68KWM-X2YGT-QR4M6-4BWMV"
    <<"VTC42-BM838-43QHV-84HX6-XJXKV"
    <<"WYR28-R7TFJ-3X2YQ-YCY4H-M249D"
    <<"TM24T-X9RMF-VWXK6-X8JC9-BFGM2"
    <<"W7VD6-7JFBR-RX26B-YKQ3Y-6FFFJ"
    <<"YQGMW-MPWTJ-34KDK-48M3W-X4Q6V"
    <<"39BXF-X8Q23-P2WWT-38T2F-G3FPG"
    <<"RCTX3-KWVHP-BR6TB-RB6DM-6X7HP"
    <<"7M67G-PC374-GR742-YH8V4-TCBY3"
    <<"22XQ2-VRXRG-P8D42-K34TD-G3QQC"
    <<"4DWFP-JF3DJ-B7DTH-78FJB-PDRHK"
    <<"------------------------"
    <<"XQNVK-8JYDB-WJ9W3-YJ8YR-WFG99"
    <<"JNRGM-WHDWX-FJJG3-K47QV-DRTFM"
    <<"YG9NW-3K39V-2T3HJ-93F3Q-G83KT"
    <<"GNFHQ-F6YQM-KQDGJ-327XX-KQBVC"
    <<"PD3PC-RHNGV-FXJ29-8JK7D-RJRJK"
    <<"7WHWN-4T7MP-G96JF-G33KR-W8GF4"
    <<"GNH9Y-D2J4T-FJHGG-QRVH7-QPFDW"
    <<"9C2PK-NWTVB-JMPW8-BFT28-7FTBF"
    <<"DR92N-9HTF2-97XKM-XW2WJ-XW3J6"
    <<"R69KK-NTPKF-7M3Q4-QYBHW-6MT9B"
    <<"J7MQP-HNJ4Y-WJ7YM-PFYGF-BY6C6"
    <<"F47MM-N3XJP-TQXJ9-BP99D-8K837"
    <<"869NQ-FJ69K-466HW-QYCP2-DDBV6"
    <<"WXY84-JN2Q9-RBCCQ-3Q3J3-3PFJ6";

    ui->checkBox->setVisible(false);

    connect(ui->pushButton_2, SIGNAL(clicked()), this, SLOT(activate()));
    connect(ui->comboBox,SIGNAL(currentIndexChanged(int)),this,SLOT(viewCode()));
    connect(ui->pushButton,SIGNAL(clicked()),this,SLOT(about()));
    viewCode();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::onReceiveMessageFromChildThread(int res,QString msg)
{
    auto text=ui->plainTextEdit_2->toPlainText()+msg+"\n";
    ui->plainTextEdit_2->setPlainText(text);
    if(res==0)
    {
        text=ui->plainTextEdit_2->toPlainText()+"------------------------"+"激活成功！------------------------\n";
        ui->plainTextEdit_2->setPlainText(text);
        ui->pushButton_2->setEnabled(true);
    }
    else if(res==-1)
    {
        text=ui->plainTextEdit_2->toPlainText()+"------------------------"+"激活失败！------------------------\n";
        ui->plainTextEdit_2->setPlainText(text);
        ui->pushButton_2->setEnabled(true);
    }
    QScrollBar *scrollbar = ui->plainTextEdit_2->verticalScrollBar();
    if (scrollbar)scrollbar->setSliderPosition(scrollbar->maximum());
}

void MainWindow::activate()
{
    QVector<QStringList> command=
    {
        QStringList()<<"slmgr.vbs"<<"/ckms",
        QStringList()<<"slmgr.vbs"<<"/skms"<<"www.ocrosoft.com",
        QStringList()<<"slmgr.vbs"<<"/ipk"<<ui->plainTextEdit->toPlainText(),
        QStringList()<<"slmgr.vbs"<<"/ato"
    };
    QVector<QString> successfulMessage=
    {
        "Key Management Service machine name cleared successfully.",
        "Key Management Service machine name set to www.ocrosoft.com successfully.",
        "Installed product key "+ui->plainTextEdit->toPlainText()+" successfully.",
        "Product activated successfully."
    };

    if(ui->comboBox->currentIndex()>=63)
    {
        auto startup=QCoreApplication::applicationDirPath();
        command=
        {
            QStringList()<<"ospp.vbs"<<"/inslic:Licenses16/"+(ui->comboBox->currentText().split('-')[1]).trimmed()+"VL_KMS_Client-ppd.xrm-ms",
            QStringList()<<"ospp.vbs"<<"/inslic:Licenses16/"+(ui->comboBox->currentText().split('-')[1]).trimmed()+"VL_KMS_Client-ul.xrm-ms",
            QStringList()<<"ospp.vbs"<<"/inslic:Licenses16/"+(ui->comboBox->currentText().split('-')[1]).trimmed()+"VL_KMS_Client-ul-oob.xrm-ms",
            QStringList()<<"ospp.vbs"<<"/inslic:Licenses16/"+(ui->comboBox->currentText().split('-')[1]).trimmed()+"VL_MAK-pl.xrm-ms",
            QStringList()<<"ospp.vbs"<<"/inslic:Licenses16/"+(ui->comboBox->currentText().split('-')[1]).trimmed()+"VL_MAK-ppd.xrm-ms",
            QStringList()<<"ospp.vbs"<<"/inslic:Licenses16/"+(ui->comboBox->currentText().split('-')[1]).trimmed()+"VL_MAK-ul-oob.xrm-ms",
            QStringList()<<"ospp.vbs"<<"/inslic:Licenses16/"+(ui->comboBox->currentText().split('-')[1]).trimmed()+"VL_MAK-ul-phn.xrm-ms",
            QStringList()<<"ospp.vbs"<<"/inpkey:"+ui->plainTextEdit->toPlainText(),
            QStringList()<<"ospp.vbs"<<"/sethst:www.ocrosoft.com",
            QStringList()<<"ospp.vbs"<<"/act"
        };
        successfulMessage=
        {
            "Office license installed successfully.",
            "Office license installed successfully.",
            "Office license installed successfully.",
            "Office license installed successfully.",
            "Office license installed successfully.",
            "Office license installed successfully.",
            "Office license installed successfully.",
            "<Product key installation successful>",
            "Successfully applied setting.",
            ui->plainTextEdit->toPlainText().split('-')[ui->plainTextEdit->toPlainText().split('-').length()-1]+"\r\n<Product activation successful>"
        };
    }

    auto thread=new NewThread(command,successfulMessage);
    connect(thread,SIGNAL(sendMessageToMainThread(int,QString)),this,SLOT(onReceiveMessageFromChildThread(int,QString)));

    ui->plainTextEdit_2->setPlainText(ui->plainTextEdit_2->toPlainText()+"------------------------"+"正在激活------------------------\n");
    QScrollBar *scrollbar = ui->plainTextEdit_2->verticalScrollBar();
    if (scrollbar)scrollbar->setSliderPosition(scrollbar->maximum());
    ui->pushButton_2->setEnabled(false);

    thread->start();
}

void MainWindow::viewCode()
{
    auto index = ui->comboBox->currentIndex();
    if(ui->comboBox->currentText().at(0)=='-')index++;
    ui->comboBox->setCurrentIndex(index);
    ui->plainTextEdit->setPlainText(list[index]);
    //QMessageBox::information(this,"",QString::number(index));
}

void MainWindow::about()
{
    QMessageBox::about(this,"关于","<p style='text-align: center;'>    <strong>WinActivator</strong><br/>    支持激活 Windows XP 以上系统，<br/>    以及 Office 2016 系列，<br/><br/>    激活有效期为180天，自动续期。<br/>    激活有效保证期为2015-2019。<br/><br/>    详见：<a href='https://www.ocrosoft.com/?p=378' target='_self'>ocrosoft.com</a></p>");
}
