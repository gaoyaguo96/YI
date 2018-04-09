#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:


    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_bianshu_textChanged();

    void on_chongzhi_clicked();

private:
    Ui::MainWindow *ui;
    bool MainWindow::connectDB();
    QString bianS = "0";
     int bian = 0 , jiou[3],yao[6],yaowei=0,bengua[6],zhigua[6];
};

#endif // MAINWINDOW_H
