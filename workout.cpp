#include "mainwindow.h"
#include "ui_workout.h"
#include "workout.h"

Workout::Workout(QWidget *parent, MainWindow* mainwindow_ptr)
    : QWidget(parent),
     ui(new Ui::Workout),
    mainwindow_ptr_m(mainwindow_ptr)
{
    ui->setupUi(this);
}

Workout::~Workout()
{
    delete ui;
}

void Workout::on_pbtn_main_menue_clicked()
{
    if (mainwindow_ptr_m){
        this->hide();
        mainwindow_ptr_m->show();
    }
}

