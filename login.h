#ifndef LOGIN_H
#define LOGIN_H

#include <QtGui/QMainWindow>
#include "ui_login.h"
#include "startpage.h"

class Login : public QMainWindow
{
    Q_OBJECT

public:
    Login(QWidget *parent = 0);
    ~Login();

public slots:
   void openStartPage();

private:
    Ui::mainWindow ui;
    Startpage* mStartpage;

};

#endif // LOGIN_H
