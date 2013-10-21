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
    void on_enableSizeButton_clicked();

private:
    Ui::MainWindow *ui;
    double **xnPlus, **xnMinus, **ynPlus, **ynMinus;
    double alpha, beta, epsilon, lyambda, fi;
    double tau, n;

private:
    void initArrays();
    void initTauComboBox();
    void initQwtPlot();
    double func1(double xn, double yn);
    double func2(double xn);
    void buildTrajectory(int numTraj);
};

#endif // MAINWINDOW_H
