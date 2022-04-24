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
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    double hypothesis_arr[100];
    double conditional_arr[100];
    int amount;
    int count_hypothesis = 0;
    int count_conditional = 0;
    int radio;


private:
    Ui::MainWindow *ui;

public slots:
    void calculate();
    void vvod_1();
    void vvod_2();
    void formula1();
    void formula2();
    void count();
};

#endif // MAINWINDOW_H
