#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtCore>
#include <QtGui>
#include <QGraphicsScene>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    void keyPressEvent(QKeyEvent * event);
    int score = 0;
    int count = 6;
    int PosNull = 0;
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QGraphicsScene * scene;
};
#endif // MAINWINDOW_H
