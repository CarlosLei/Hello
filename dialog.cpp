#include "dialog.h"
#include <QPushButton>
#include <QLabel>

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
{
    QPushButton *okBtn = new QPushButton(this);
    okBtn->setText(tr("OK"));
    connect(okBtn,SIGNAL(clicked()),this,SLOT(close()));

    QPushButton *cancelBtn = new QPushButton(this);
    cancelBtn->setText(tr("Cancel"));  
    cancelBtn->setGeometry(50,50,100,20);

    QPushButton *more = new QPushButton(this);
    more->setText(tr("More"));
    more->setGeometry(160,50,100,20);

    QLabel *label = new QLabel(this);
    label->setText(tr("Miss you!"));
    label->setGeometry(50,30,100,20);
    QLabel *label1 = new QLabel(this);
    label1->setText(tr("Miss you too!"));
    label1->setGeometry(160,30,100,20);



}

Dialog::~Dialog()
{

}
