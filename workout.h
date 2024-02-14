#ifndef WORKOUT_H
#define WORKOUT_H

#include <QWidget>

namespace Ui {
class Workout;
}

class Workout : public QWidget
{
    Q_OBJECT

public:
    explicit Workout(QWidget *parent = nullptr);
    ~Workout();

private slots:
    void on_pbtn_main_menue_clicked();


private:
    Ui::Workout *ui;


signals:
    void BackHome_signal();

};


#endif // WORKOUT_H
