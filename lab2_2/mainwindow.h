#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "ap-master/ap.hpp"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    ap_int<2048> combOut(ap_int<2048> n, ap_int<2048> m);


private slots:
    void calculate();
};

#endif // MAINWINDOW_H
