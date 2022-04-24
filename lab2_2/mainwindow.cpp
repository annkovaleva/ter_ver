#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "ap-master/ap.hpp"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QPixmap pix1("form_between.png");
    ui->form_between->setPixmap(pix1);
    QPixmap pix2("form_a.png");
    ui->form_a->setPixmap(pix2);
    QPixmap pix3("form_b.png");
    ui->form_b->setPixmap(pix3);
    QPixmap pix4("form_c.png");
    ui->form_c->setPixmap(pix4);
    QPixmap pix5("form_d.png");
    ui->form_d->setPixmap(pix5);

    connect(ui->calculate, SIGNAL (clicked(bool)), this, SLOT(calculate()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::calculate()
{
    ap_int<2048> n, m1, m2, student1, student2, tmp, ans[4];
    n=ui->n_->value();
    m1=ui->m1->value();
    m2=ui->m2->value();

    if(n>= m1 && n>= m2)
    {
        student1 = combOut(m1,3) *100000;
        student1 /= combOut(n,3);
        tmp = combOut(m1,2)*combOut(n-m1,1) *100000;
        tmp /= combOut(n,3);
        student1 += tmp;

        student2 = combOut(m2,3) *100000;
        student2 /= combOut(n,3);
        tmp = combOut(m2,2)*combOut(n-m2,1) *100000;
        tmp /= combOut(n,3);
        student2 += tmp;

        ans[0] = student1 * student2;
        ans[1] = student1 * (100000-student2);
        ans[2] = ans[1] + (100000-student1)*student2;
        ans[3] = ans[0] + ans[2];

        QString between = "P(H1) = ";
        if (student1 == 0)
        {
            between.append("0");
        }
        else
        {
            std::string str;
            str = std::string(student1);
            QString qstr = QString::fromStdString(str);
            int nul = 5-qstr.length();
            QString ans_str = "";
            ans_str.append("0.");

            for(int i = 1; i<=nul; i++)
                ans_str.append("0");
            ans_str.append(qstr);

            while (ans_str[ans_str.length()-1] == '0')
            {
                ans_str.remove(ans_str.length()-1,1);
            }
            between.append(ans_str);
        }
        between.append("; P(H2) = ");
        if (student2 == 0)
        {
            between.append("0.");
        }
        else
        {
            std::string str;
            str = std::string(student2);
            QString qstr = QString::fromStdString(str);
            int nul = 5-qstr.length();
            QString ans_str = "";
            ans_str.append("0.");

            for(int i = 1; i<=nul; i++)
                ans_str.append("0");
            ans_str.append(qstr);

            while (ans_str[ans_str.length()-1] == '0')
            {
                ans_str.remove(ans_str.length()-1,1);
            }
            between.append(ans_str);
            between.append(".");
        }
        ui->between->setText(between);
        QString answer;
        QString lit[4] = {"a) ", "b) ", "c) ", "d) "};
        for (int i = 0; i<4; i++)
        {
            answer.append(lit[i]);
            if (ans[i] == 0)
            {
                answer.append("the probability of an event is close to zero\n");
            }
            else
            {
                std::string str;
                str = std::string(ans[i]);
                QString qstr = QString::fromStdString(str);
                int nul = 10-qstr.length();
                QString ans_str = "";
                ans_str.append("0.");

                for(int i = 1; i<=nul; i++)
                    ans_str.append("0");
                ans_str.append(qstr);

                while (ans_str[ans_str.length()-1] == '0')
                {
                    ans_str.remove(ans_str.length()-1,1);
                }
                ans_str.append("\n");
                answer.append(ans_str);
            }
        }
        answer.remove(answer.length()-1,1);
        ui->answer->setText(answer);
    }
    else {
        ui->answer->setText("invalid input data");
    }
}

ap_int<2048> fact(ap_int<2048> a)
{
    ap_int<2048> answer = 1;
    for(int i=1; i<=a; i++)
    {
        answer *= i;
    }
    return answer;
}

ap_int<2048> MainWindow::combOut(ap_int<2048> n, ap_int<2048> m)
{
    if(m<=n)
    {
        ap_int<2048> a = n-m;
        ap_int<2048> answer1;
        ap_int<2048> answer2;
        answer1 = fact(n);
        answer2 = fact(m)*fact(a);
        answer1 = answer1/answer2;
        return answer1;
    }
    return 0;
}

