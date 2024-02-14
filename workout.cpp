#include "mainwindow.h"
#include "ui_workout.h"
#include "workout.h"

Workout::Workout(QWidget *parent)
    : QWidget(parent),
     ui(new Ui::Workout)

{
    ui->setupUi(this);
}

Workout::~Workout()
{
    delete ui;
}



void Workout::on_pbtn_main_menue_clicked()
{
    emit BackHome_signal();
}

