#include "login.h"

Login::Login(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
    connect(ui.pushButton, SIGNAL(clicked()), this, SLOT(openStartPage()));
}

Login::~Login()
{
}

void Login::openStartPage()
{
    hide();

    mStartpage = new Startpage();

    mStartpage->show();

}
