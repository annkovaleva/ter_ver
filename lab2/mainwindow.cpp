#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QPixmap formula("formula.png");
    ui->formula->setPixmap(formula);

    QPixmap shema("shema.png");
    ui->shema->setPixmap(shema);

    connect(ui->button, SIGNAL (clicked(bool)), this, SLOT(calculate()));
    connect(ui->shema1, SIGNAL(clicked(bool)), this, SLOT(shema1()));
    connect(ui->shema2, SIGNAL(clicked(bool)), this, SLOT(shema2()));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::calculate()
{
    double q1,q2,q3,q4,q5,answer;
    q1=ui->q1->value();
    q2=ui->q2->value();
    q3=ui->q3->value();
    q4=ui->q4->value();
    q5=ui->q5->value();

    if(ui->shema1->isChecked())
        answer=(q1+q4-q1*q4)*q3*(q2+q5-q2*q5);
    else {
        answer=q2*(q1+q4-q1*q4)+q3*q5-q2*q3*q5*(q1+q4-q1*q4);
    }

    QString str;
    ui->otvet->setText(str.number(answer));
}

void MainWindow::shema1()
{
    QPixmap formula("formula.png");
    ui->formula->setPixmap(formula);

    QPixmap shema("shema.png");
    ui->shema->setPixmap(shema);
}

void MainWindow::shema2()
{
    QPixmap formula("formula2.png");
    ui->formula->setPixmap(formula);

    QPixmap shema("shema2.png");
    ui->shema->setPixmap(shema);
}
