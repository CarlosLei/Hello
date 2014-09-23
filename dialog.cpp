#include "dialog.h"
#include <QPushButton>

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
{
    QPushButton *okBtn = new QPushButton(this);
    okBtn->setText(tr("OK"));
}

Dialog::~Dialog()
{

}
