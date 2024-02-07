#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QErrorMessage>
//alle benötigten Klassen bzw. Ansichten
#include <workout.h>
#include <editor.h>
#include <historie.h>

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

    Workout workout_obj;
    Editor editor_obj;
    Historie historie_obj;


    enum class Widget_Indexes:int{
        mainwindow_index = 0,
        workout_index = 1,
        editor_index = 2,
        historie_index = 3
    };



private slots:
    void moveHome();


    void on_pbtn_start_workout_clicked();
    void on_pbtn_editor_clicked();
    void on_pbnt_historie_clicked();
};
#endif // MAINWINDOW_H
