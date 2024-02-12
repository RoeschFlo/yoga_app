#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent),
     ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    // Die Ansichten werden mit bestimmten Index eingefügt
    ui->stackedWidget->insertWidget(
        static_cast<int>(Widget_Indexes::workout_index),
        &workout_obj);
    ui->stackedWidget->insertWidget(
        static_cast<int>(Widget_Indexes::editor_index),
        &editor_obj);
    ui->stackedWidget->insertWidget(
        static_cast<int>(Widget_Indexes::historie_index),
        &historie_obj);


    connect(&workout_obj,
            SIGNAL(BackHome_signal()),
            this, SLOT(moveHome()));
    connect(&editor_obj,
            SIGNAL(BackHome_signal()),
            this, SLOT(moveHome()));
    connect(&historie_obj,
            SIGNAL(BackHome_signal()),
            this, SLOT(moveHome()));
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::moveHome()
{
    ui->stackedWidget->setCurrentIndex(
        static_cast<int>(Widget_Indexes::mainwindow_index));
}


void MainWindow::on_pbtn_start_workout_clicked()
{
    ui->stackedWidget->setCurrentIndex(
        static_cast<int>(Widget_Indexes::workout_index));
}


void MainWindow::on_pbtn_editor_clicked()
{
    ui->stackedWidget->setCurrentIndex(
        static_cast<int>(Widget_Indexes::editor_index));
}


void MainWindow::on_pbnt_historie_clicked()
{
    ui->stackedWidget->setCurrentIndex(
        static_cast<int>(Widget_Indexes::historie_index));
}

