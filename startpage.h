#ifndef STARTPAGE_H
#define STARTPAGE_H

#include <QMainWindow>
#include "ui_startpage.h"

class Startpage : public QMainWindow
{
public:
    Startpage(QWidget *parent=0);
    ~Startpage();

private:
    Ui::MainWindow ui;
};

#endif // STARTPAGE_H
