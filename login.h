#ifndef LOGIN_H
#define LOGIN_H

#include <QtGui/QMainWindow>
#include "ui_login.h"

class Login : public QMainWindow
{
    Q_OBJECT

public:
    Login(QWidget *parent = 0);
    ~Login();

private:
    Ui::mainWindow ui;
};

#endif // LOGIN_H
