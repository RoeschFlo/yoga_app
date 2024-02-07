#include "historie.h"
#include "ui_historie.h"

Historie::Historie(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Historie)
{
    ui->setupUi(this);
}

Historie::~Historie()
{
    delete ui;
}

void Historie::on_pbtn_main_menu_clicked()
{
    emit BackHome_signal();
}

