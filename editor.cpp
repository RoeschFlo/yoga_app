#include "editor.h"
#include "ui_editor.h"

Editor::Editor(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Editor)
{
    ui->setupUi(this);
}

Editor::~Editor()
{
    delete ui;
}

void Editor::on_pbtn_main_menu_clicked()
{
    emit BackHome_signal();
}

