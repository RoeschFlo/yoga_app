#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QErrorMessage>

//Alle Klassen um Cicular Dependencies zu vermieden!
#include "workout.h"

QT_BEGIN_NAMESPACE
namespace Ui {


//Vorwärtsdeklaration
class Workout;

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
public:
    MainWindow* mainWindow_ptr;
    Workout* workout_ptr;


private slots:


    void on_pbtn_start_workout_clicked();





};
#endif // MAINWINDOW_H
