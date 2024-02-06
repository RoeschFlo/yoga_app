#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent),
     ui(new Ui::MainWindow),
    mainWindow_ptr(this)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_pbtn_start_workout_clicked()
{
    workout_ptr = new Workout(nullptr, mainWindow_ptr);
    if (workout_ptr){
        workout_ptr->show();
        this->hide();}
    // else{
    //      QErrorMessage errorMessage;
    //      errorMessage.showMessage("Heftiger Fehler!!!"
    //                               "Null-Ptr Fehler");
    //      errorMessage.exec();
    // }
}

