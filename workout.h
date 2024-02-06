#ifndef WORKOUT_H
#define WORKOUT_H

#include <QWidget>

//Vorwärtsdeklaration
class MainWindow;


namespace Ui {
class Workout;
}

class Workout : public QWidget
{
    Q_OBJECT

public:
    explicit Workout(QWidget *parent = nullptr,
                     MainWindow* mainwindow_ptr = nullptr);
    ~Workout();

private slots:
    void on_pbtn_main_menue_clicked();

private:
    Ui::Workout *ui;
    MainWindow* mainwindow_ptr_m;
};

#endif // WORKOUT_H
