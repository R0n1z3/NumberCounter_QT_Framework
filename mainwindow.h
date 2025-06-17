#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    int counter = 0;

    private slots:
    void on_NumberUpButton_clicked();
    void on_NumberDownButton_clicked();
    void on_ResetButton_clicked();

};
#endif // MAINWINDOW_H
