#ifndef MAINWINDOWCR_H
#define MAINWINDOWCR_H

#include <QMainWindow>

namespace Ui {
class mainWindowCR;
}

class mainWindowCR : public QMainWindow
{
    Q_OBJECT

public:
    explicit mainWindowCR(QWidget *parent = 0);
    ~mainWindowCR();

private:
    Ui::mainWindowCR *ui;
};

#endif // MAINWINDOWCR_H
