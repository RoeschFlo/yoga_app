#ifndef EDITOR_H
#define EDITOR_H

#include <QWidget>
#include <workout_file_handler.h>

namespace Ui {
class Editor;
}

class Editor : public QWidget
{
    Q_OBJECT

public:
    explicit Editor(QWidget *parent = nullptr);
    ~Editor();

private slots:
    void on_pbtn_main_menu_clicked();

    void on_pbtn_save_exercises_clicked();

    void on_pbtn_print_exercise_clicked();

private:
    Ui::Editor *ui;

    //For Testing
    Workout_file_handler workout_handler_obj;

    Single_exercise test_to_save;
    Single_exercise test_to_read;




signals:
    void BackHome_signal();
};

#endif // EDITOR_H
