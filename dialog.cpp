#include "dialog.h"
#include <QPushButton>

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
{
    QPushButton *okBtn = new QPushButton(this);
    okBtn->setText(tr("OK"));
    QPushButton *cancelBtn = new QPushButton(this);
    cancelBtn->setText(tr("Cancel"));
    cancelBtn->setGeometry(50,50,100,20);
    QPushButton *more = new QPushButton(this);
    more->setText(tr("More"));
    more->setGeometry(160,50,100,20);

}

Dialog::~Dialog()
{

}
