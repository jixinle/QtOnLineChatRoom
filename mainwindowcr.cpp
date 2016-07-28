#include "mainwindowcr.h"
#include "ui_mainwindowcr.h"

mainWindowCR::mainWindowCR(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::mainWindowCR)
{
    ui->setupUi(this);
}

mainWindowCR::~mainWindowCR()
{
    delete ui;
}
