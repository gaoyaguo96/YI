#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QSqlQueryModel>
#include <QSqlQuery>
#include<QMessageBox>
#include<qDebug>
#include <QApplication>
#include <QDialog>

#include <QSqlDatabase><span style="white-space:pre;">                    </span>
#include <QDebug>

#include<QSqlError>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connectDB();
    ui->bianshu->setText(bianS);

}

MainWindow::~MainWindow()
{
    delete ui;
}

bool MainWindow::connectDB()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");   //数据库驱动类型为SQL Server
        qDebug()<<"ODBC driver?"<<db.isValid();
        QString dsn = QString::fromLocal8Bit("QTDSN");      //数据源名称
        db.setHostName("localhost");                        //选择本地主机，127.0.1.1
        db.setDatabaseName(dsn);                            //设置数据源名称
        db.setUserName("sa");                               //登录用户
        db.setPassword("2333");                           //密码
        if(!db.open())                                      //打开数据库
        {
            qDebug()<<db.lastError().text();
            QMessageBox::critical(0, QObject::tr("Database error"), db.lastError().text());
            return false;                                   //打开失败
        }
        else
        {
            qDebug()<<"database open success!";

        }
        return true;


}

void MainWindow::on_pushButton_clicked()
{
    jiou[bian%3] = 1;

    bianS = QString::number(bian+1,10);

    if((bian+1)%3==0)
    {
        int yinyang=0;
        for(int i = 0;i<3;i++)
        {
            if(jiou[i]==2)
                yinyang++;
        }

        yao[yaowei++]= yinyang;
        if(yaowei == 1)
        {
            if(yinyang==0)
                ui->yao1->setText("9");
            else if(yinyang==1)
                ui->yao1->setText("8");
            else if(yinyang==2)
                ui->yao1->setText("7");
            else if(yinyang==3)
                ui->yao1->setText("6");

        }
        else if(yaowei == 2)
        {
            if(yinyang==0)
                ui->yao2->setText("9");
            else if(yinyang==1)
                ui->yao2->setText("8");
            else if(yinyang==2)
                ui->yao2->setText("7");
            else if(yinyang==3)
                ui->yao2->setText("6");
        }
        else if(yaowei == 3)
        {
            if(yinyang==0)
                ui->yao3->setText("9");
            else if(yinyang==1)
                ui->yao3->setText("8");
            else if(yinyang==2)
                ui->yao3->setText("7");
            else if(yinyang==3)
                ui->yao3->setText("6");
        }
        else if(yaowei == 4)
        {
            if(yinyang==0)
                ui->yao4->setText("9");
            else if(yinyang==1)
                ui->yao4->setText("8");
            else if(yinyang==2)
                ui->yao4->setText("7");
            else if(yinyang==3)
                ui->yao4->setText("6");
        }
        else if(yaowei == 5)
        {
            if(yinyang==0)
                ui->yao5->setText("9");
            else if(yinyang==1)
                ui->yao5->setText("8");
            else if(yinyang==2)
                ui->yao5->setText("7");
            else if(yinyang==3)
                ui->yao5->setText("6");
        }
        else if(yaowei == 6)
        {
            if(yinyang==0)
                ui->yao6->setText("9");
            else if(yinyang==1)
                ui->yao6->setText("8");
            else if(yinyang==2)
                ui->yao6->setText("7");
            else if(yinyang==3)
                ui->yao6->setText("6");
        }


    }
    bian++;
    ui->bianshu->setText(bianS);
}

void MainWindow::on_pushButton_2_clicked()
{
    jiou[bian%3] = 1;

    bianS = QString::number(bian+1,10);

    if((bian+1)%3==0)
    {
        int yinyang=0;
        for(int i = 0;i<3;i++)
        {
            if(jiou[i]==2)
                yinyang++;
        }

        yao[yaowei++]= yinyang;
        if(yaowei == 1)
        {
            if(yinyang==0)
                ui->yao1->setText("9");
            else if(yinyang==1)
                ui->yao1->setText("8");
            else if(yinyang==2)
                ui->yao1->setText("7");
            else if(yinyang==3)
                ui->yao1->setText("6");

        }
        else if(yaowei == 2)
        {
            if(yinyang==0)
                ui->yao2->setText("9");
            else if(yinyang==1)
                ui->yao2->setText("8");
            else if(yinyang==2)
                ui->yao2->setText("7");
            else if(yinyang==3)
                ui->yao2->setText("6");
        }
        else if(yaowei == 3)
        {
            if(yinyang==0)
                ui->yao3->setText("9");
            else if(yinyang==1)
                ui->yao3->setText("8");
            else if(yinyang==2)
                ui->yao3->setText("7");
            else if(yinyang==3)
                ui->yao3->setText("6");
        }
        else if(yaowei == 4)
        {
            if(yinyang==0)
                ui->yao4->setText("9");
            else if(yinyang==1)
                ui->yao4->setText("8");
            else if(yinyang==2)
                ui->yao4->setText("7");
            else if(yinyang==3)
                ui->yao4->setText("6");
        }
        else if(yaowei == 5)
        {
            if(yinyang==0)
                ui->yao5->setText("9");
            else if(yinyang==1)
                ui->yao5->setText("8");
            else if(yinyang==2)
                ui->yao5->setText("7");
            else if(yinyang==3)
                ui->yao5->setText("6");
        }
        else if(yaowei == 6)
        {
            if(yinyang==0)
                ui->yao6->setText("9");
            else if(yinyang==1)
                ui->yao6->setText("8");
            else if(yinyang==2)
                ui->yao6->setText("7");
            else if(yinyang==3)
                ui->yao6->setText("6");
        }


    }
    bian++;
      ui->bianshu->setText(bianS);

}

void MainWindow::on_pushButton_3_clicked()
{

    if((bian+1)%3==2||(bian+1)%3==0)
    {
        jiou[(bian)%3]= 2;
    }
    else
        jiou[(bian)%3]= 1;

    bianS = QString::number(bian+1,10);

    if((bian+1)%3==0)
    {
        int yinyang=0;
        for(int i = 0;i<3;i++)
        {
            if(jiou[i]==2)
                yinyang++;
        }

        yao[yaowei++]= yinyang;
        if(yaowei == 1)
        {
            if(yinyang==0)
                ui->yao1->setText("9");
            else if(yinyang==1)
                ui->yao1->setText("8");
            else if(yinyang==2)
                ui->yao1->setText("7");
            else if(yinyang==3)
                ui->yao1->setText("6");

        }
        else if(yaowei == 2)
        {
            if(yinyang==0)
                ui->yao2->setText("9");
            else if(yinyang==1)
                ui->yao2->setText("8");
            else if(yinyang==2)
                ui->yao2->setText("7");
            else if(yinyang==3)
                ui->yao2->setText("6");
        }
        else if(yaowei == 3)
        {
            if(yinyang==0)
                ui->yao3->setText("9");
            else if(yinyang==1)
                ui->yao3->setText("8");
            else if(yinyang==2)
                ui->yao3->setText("7");
            else if(yinyang==3)
                ui->yao3->setText("6");
        }
        else if(yaowei == 4)
        {
            if(yinyang==0)
                ui->yao4->setText("9");
            else if(yinyang==1)
                ui->yao4->setText("8");
            else if(yinyang==2)
                ui->yao4->setText("7");
            else if(yinyang==3)
                ui->yao4->setText("6");
        }
        else if(yaowei == 5)
        {
            if(yinyang==0)
                ui->yao5->setText("9");
            else if(yinyang==1)
                ui->yao5->setText("8");
            else if(yinyang==2)
                ui->yao5->setText("7");
            else if(yinyang==3)
                ui->yao5->setText("6");
        }
        else if(yaowei == 6)
        {
            if(yinyang==0)
                ui->yao6->setText("9");
            else if(yinyang==1)
                ui->yao6->setText("8");
            else if(yinyang==2)
                ui->yao6->setText("7");
            else if(yinyang==3)
                ui->yao6->setText("6");
        }


    }
    bian++;
     ui->bianshu->setText(bianS);


}

void MainWindow::on_pushButton_4_clicked()
{
    jiou[bian%3] = 2;

    bianS = QString::number(bian+1,10);

    if((bian+1)%3==0)
    {
        int yinyang=0;
        for(int i = 0;i<3;i++)
        {
            if(jiou[i]==2)
                yinyang++;
        }

        yao[yaowei++]= yinyang;
        if(yaowei == 1)
        {
            if(yinyang==0)
                ui->yao1->setText("9");
            else if(yinyang==1)
                ui->yao1->setText("8");
            else if(yinyang==2)
                ui->yao1->setText("7");
            else if(yinyang==3)
                ui->yao1->setText("6");

        }
        else if(yaowei == 2)
        {
            if(yinyang==0)
                ui->yao2->setText("9");
            else if(yinyang==1)
                ui->yao2->setText("8");
            else if(yinyang==2)
                ui->yao2->setText("7");
            else if(yinyang==3)
                ui->yao2->setText("6");
        }
        else if(yaowei == 3)
        {
            if(yinyang==0)
                ui->yao3->setText("9");
            else if(yinyang==1)
                ui->yao3->setText("8");
            else if(yinyang==2)
                ui->yao3->setText("7");
            else if(yinyang==3)
                ui->yao3->setText("6");
        }
        else if(yaowei == 4)
        {
            if(yinyang==0)
                ui->yao4->setText("9");
            else if(yinyang==1)
                ui->yao4->setText("8");
            else if(yinyang==2)
                ui->yao4->setText("7");
            else if(yinyang==3)
                ui->yao4->setText("6");
        }
        else if(yaowei == 5)
        {
            if(yinyang==0)
                ui->yao5->setText("9");
            else if(yinyang==1)
                ui->yao5->setText("8");
            else if(yinyang==2)
                ui->yao5->setText("7");
            else if(yinyang==3)
                ui->yao5->setText("6");
        }
        else if(yaowei == 6)
        {
            if(yinyang==0)
                ui->yao6->setText("9");
            else if(yinyang==1)
                ui->yao6->setText("8");
            else if(yinyang==2)
                ui->yao6->setText("7");
            else if(yinyang==3)
                ui->yao6->setText("6");
        }


    }
    bian++;
    ui->bianshu->setText(bianS);

}

void MainWindow::on_bianshu_textChanged()
{
    if(bian == 18)
    {
        ui->pushButton->setEnabled(false);
         ui->pushButton_2->setEnabled(false);
          ui->pushButton_3->setEnabled(false);
           ui->pushButton_4->setEnabled(false);
        for(int i=0;i<6;i++)
        {
            if(yao[i]==0)
            {
                bengua[i]=1;
                zhigua[i]=0;
            }
            else if(yao[i]==1)
            {
                bengua[i]=zhigua[i]=0;
            }
            else if(yao[i]==2)
            {
                bengua[i]=zhigua[i]=1;
            }
            else
            {
                bengua[i]=0;
                zhigua[i]=1;
            }
        }
        QString ciguaxing,biguaxing;
        if(bengua[0]==1)
        {
            ui->ben1->setText("1");
            ciguaxing = '1';
        }
            else
        {
            ui->ben1->setText("0");
            ciguaxing = '0';
        }
        if(bengua[1]==1)
        {
            ui->ben2->setText("1");
            ciguaxing += '1';
        }
            else
        {
            ui->ben2->setText("0");
            ciguaxing += '0';
        }
        if(bengua[2]==1)
        {
            ui->ben3->setText("1");
            ciguaxing += '1';
        }
        else
        {
            ui->ben3->setText("0");
            ciguaxing += '0';
        }
        if(bengua[3]==1)
        {
            ui->ben4->setText("1");
            ciguaxing += '1';
        }
        else
        {
            ui->ben4->setText("0");
            ciguaxing += '0';
        }
        if(bengua[4]==1)
        {
            ui->ben5->setText("1");
            ciguaxing += '1';
        }
        else
        {
            ui->ben5->setText("0");
            ciguaxing += '0';
        }
        if(bengua[5]==1)
        {
            ui->ben6->setText("1");
            ciguaxing += '1';
        }
        else
        {
            ui->ben6->setText("0");
            ciguaxing += '0';
        }

        if(zhigua[0]==1)
        {
            ui->bian1->setText("1");
            biguaxing = '1';
        }
        else
        {
            ui->bian1->setText("0");
            biguaxing = '0';
        }
        if(zhigua[1]==1)
        {
            ui->bian2->setText("1");
            biguaxing += '1';
        }
        else
        {
            ui->bian2->setText("0");
            biguaxing += '0';
        }
        if(zhigua[2]==1)
        {
            ui->bian3->setText("1");
            biguaxing += '1';
        }
        else
        {
            ui->bian3->setText("0");
            biguaxing += '0';
        }
        if(zhigua[3]==1)
        {
            ui->bian4->setText("1");
            biguaxing += '1';
        }
        else
        {
            ui->bian4->setText("0");
            biguaxing += '0';
        }
        if(zhigua[4]==1)
        {
            ui->bian5->setText("1");
            biguaxing += '1';
        }
        else
        {
            ui->bian5->setText("0");
            biguaxing += '0';
        }
        if(zhigua[5]==1)
        {
            ui->bian6->setText("1");
            biguaxing += '1';
        }
        else
        {
            ui->bian6->setText("0");
            biguaxing += '0';
        }

        QSqlQuery query;



        int bianyao = 0;
        for(int i=0;i<6;i++)
        {
            if(bengua[i]!=zhigua[i])
                bianyao++;
        }
        if(bianyao==0)
        {
            QString zhaogua = QString("select 彖辞 from 卦名 where 卦形 = '%1'").arg(ciguaxing);
            query.exec(zhaogua);
            while (query.next())//遍历查询的数据
                        {
            ui->guaci1->setText(query.value(0).toString());

                         }
            query.clear();
        }
        else if(bianyao==1)
        {
            int yaowei;
            for(int i=0;i<6;i++)
            {
                if(bengua[i]!=zhigua[i])
                    yaowei = i+1;
            }
            QString W = QString::number(yaowei, 10);
            QString zhaoyao = QString("select 爻辞 from 爻辞 where 爻位='%2' and 卦名= (select 卦名 from 卦名 where 卦形 = '%1')").arg(ciguaxing).arg(W);
            query.exec(zhaoyao);
            while (query.next())//遍历查询的数据
             {
                 ui->guaci1->setText(query.value(0).toString());
             }
            query.clear();
        }
        else if(bianyao==2)
        {
            int yaowei[2],ji=0;
            for(int i=0;i<6;i++)
            {
               if(bengua[i]!=zhigua[i])
               {
                   yaowei[ji++]=i+1;
               }
            }
            QString W = QString::number(yaowei[1], 10),S=QString::number(yaowei[0], 10);
            QString zhaoyao1 = QString("select 爻辞 from 爻辞 where 爻位='%2' and 卦名= (select 卦名 from 卦名 where 卦形 = '%1')").arg(ciguaxing).arg(W);
            query.exec(zhaoyao1);
            while (query.next())//遍历查询的数据
             {
                 ui->guaci1->setText(query.value(0).toString());
             }
            query.clear();

            QString zhaoyao2 = QString("select 爻辞 from 爻辞 where 爻位='%2' and 卦名= (select 卦名 from 卦名 where 卦形 = '%1')").arg(ciguaxing).arg(S);
            query.exec(zhaoyao2);
            while (query.next())//遍历查询的数据
             {
                 ui->guaci2->setText(query.value(0).toString());
             }
            query.clear();



        }
        else if(bianyao==3)
        {
            QString zhaogua1 = QString("select 彖辞 from 卦名 where 卦形 = '%1'").arg(ciguaxing),
                    zhaogua2 = QString("select 彖辞 from 卦名 where 卦形 = '%1'").arg(biguaxing);
            query.exec(zhaogua1);
           while (query.next())//遍历查询的数据
            {
                ui->guaci1->setText(query.value(0).toString());
            }
           query.clear();

            query.exec(zhaogua2);
            while (query.next())//遍历查询的数据
             {
                 ui->guaci2->setText(query.value(0).toString());
             }
            query.clear();

        }
        else if(bianyao==4)
        {
            int yaowei[2],ji=0;
            for(int i=0;i<6;i++)
            {
               if(bengua[i]==zhigua[i])
               {
                   yaowei[ji++]=i+1;
               }
            }
            QString W = QString::number(yaowei[1], 10),S=QString::number(yaowei[0], 10);
            QString zhaoyao1 = QString("select 爻辞 from 爻辞 where 爻位='%2' and 卦名= (select 卦名 from 卦名 where 卦形 = '%1')").arg(biguaxing).arg(S);
            query.exec(zhaoyao1);
            while (query.next())//遍历查询的数据
             {
                 ui->guaci1->setText(query.value(0).toString());
             }
            query.clear();

            QString zhaoyao2 = QString("select 爻辞 from 爻辞 where 爻位='%2' and 卦名= (select 卦名 from 卦名 where 卦形 = '%1')").arg(biguaxing).arg(W);
            query.exec(zhaoyao2);
            while (query.next())//遍历查询的数据
             {
                 ui->guaci2->setText(query.value(0).toString());
             }
            query.clear();

        }
        else if(bianyao==5)
        {
            int yaowei;
            for(int i=0;i<6;i++)
            {
                if(bengua[i]==zhigua[i])
                    yaowei = i+1;
            }
            QString W = QString::number(yaowei, 10);
            QString zhaoyao = QString("select 爻辞 from 爻辞 where 爻位='%2' and 卦名= (select 卦名 from 卦名 where 卦形 = '%1')").arg(biguaxing).arg(W);
            query.exec(zhaoyao);
            while (query.next())//遍历查询的数据
             {
                 ui->guaci1->setText(query.value(0).toString());
             }
            query.clear();


        }
        else if(bianyao==6)
        {
            if(ciguaxing=="000000")
            {
                QString zhaoyao = QString("select 爻辞 from 爻辞 where 爻位='7' and 卦名='坤卦'");
                query.exec(zhaoyao);


                while (query.next())//遍历查询的数据
                 {
                     ui->guaci1->setText(query.value(0).toString());
                 }
                query.clear();


            }
            else if(ciguaxing=="111111")
            {
                QString zhaoyao = QString("select 爻辞 from 爻辞 where 爻位='7' and 卦名='乾卦'");
                query.exec(zhaoyao);
                while (query.next())//遍历查询的数据
                 {
                      ui->guaci1->setText(query.value(0).toString());
                 }
                query.clear();

            }
            else
            {
                QString zhaogua = QString("select 彖辞 from 卦名 where 卦形 = '%1'").arg(biguaxing);
                query.exec(zhaogua);
               while (query.next())//遍历查询的数据
                {
                    ui->guaci1->setText(query.value(0).toString());
                }
               query.clear();
            }
        }

        QMessageBox message(QMessageBox::NoIcon, " ", "Divination accomplished.");

         message.exec();


    }
}

void MainWindow::on_chongzhi_clicked()
{
     bianS = "0";
     bian = 0;
     ui->bianshu->setText(bianS);
     yaowei=0;
     ui->guaci1->setText("");
     ui->guaci2->setText("");
     ui->ben1->setText("");
     ui->ben2->setText("");
ui->ben3->setText("");
ui->ben4->setText("");
ui->ben5->setText("");
ui->ben6->setText("");
  ui->yao1->setText("");
  ui->yao2->setText("");
  ui->yao3->setText("");
  ui->yao4->setText("");
  ui->yao5->setText("");
  ui->yao6->setText("");
  ui->bian1->setText("");
 ui->bian2->setText("");
  ui->bian3->setText("");
   ui->bian4->setText("");
    ui->bian5->setText("");
     ui->bian6->setText("");
     ui->pushButton->setEnabled(true);
      ui->pushButton_2->setEnabled(true);
       ui->pushButton_3->setEnabled(true);
        ui->pushButton_4->setEnabled(true);

}
