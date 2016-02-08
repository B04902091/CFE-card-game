#include "master.h"
#include "ui_master.h"

Master::Master(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Master)
{
    ui->setupUi(this);
}

Master::~Master()
{
    delete ui;
}
