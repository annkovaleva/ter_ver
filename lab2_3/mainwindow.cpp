#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->vvod1, SIGNAL (clicked(bool)), this, SLOT(vvod_1()));
    connect(ui->vvod2, SIGNAL (clicked(bool)), this, SLOT(vvod_2()));
    connect(ui->button, SIGNAL (clicked(bool)), this, SLOT(calculate()));
    connect(ui->radio1, SIGNAL (clicked(bool)), this, SLOT(formula1()));
    connect(ui->radio2, SIGNAL (clicked(bool)), this, SLOT(formula2()));
    connect(ui->count, SIGNAL (clicked(bool)), this, SLOT(count()));

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::calculate(){

    double sum = 0;
    for(int i=0; i<amount; i++) {

        sum=sum+hypothesis_arr[i];
    }

    sum=sum/1;

    if(sum==1) {

        double big_ver=0;
        double us_ver=0;

        for(int i=0; i<amount; i++) {

            big_ver=big_ver+hypothesis_arr[i]*conditional_arr[i];
        }

        us_ver = (hypothesis_arr[0]*conditional_arr[0])/big_ver;

        if(radio == 0) {

            QString str;
            ui->answer->setText(str.setNum(big_ver));
        }
        else {

            QString str;
            ui->answer->setText(str.setNum(us_ver));
        }



    }
    else {

        ui->answer->setText("Сумма гипотез не равна единице!");
    }

}

void MainWindow::vvod_1(){

    if(count_hypothesis!=amount) {

        hypothesis_arr[count_hypothesis]=ui->hypothesis->value();
        count_hypothesis++;

    }
    else {
        ui->vvod1->isEnabled();
    }

    ui->hypothesis->setValue(0.00);
}

void MainWindow::vvod_2(){

    if(count_conditional!=amount) {

        conditional_arr[count_conditional]=ui->conditional->value();
        count_conditional++;
    }
    else {
        ui->vvod2->isEnabled();
    }

    ui->conditional->setValue(0.00);
}

void MainWindow::count(){

    amount=ui->amount->value();
    ui->amount->setValue(0);

}


void MainWindow::formula1(){

    QPixmap pix2("pol_ver.png");
    ui->formula->setPixmap(pix2);
    radio = 0;
}

void MainWindow::formula2(){

    QPixmap pix1("bayes.png");
    ui->formula->setPixmap(pix1);
    radio = 1;
}

