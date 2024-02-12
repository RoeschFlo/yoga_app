#include "editor.h"
#include "ui_editor.h"



Editor::Editor(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Editor)
{
    ui->setupUi(this);
    test_to_save ={"Hundt", 5};
    test_to_read ={"",0};
}

Editor::~Editor()
{
    delete ui;
}

void Editor::on_pbtn_main_menu_clicked()
{
    emit BackHome_signal();
}


void Editor::on_pbtn_save_exercises_clicked()
{
    bool ok;
    QStringList list = InputDialog::getStrings(this, &ok);
    if (ok) {

    }
}


void Editor::on_pbtn_print_exercise_clicked()
{

}

