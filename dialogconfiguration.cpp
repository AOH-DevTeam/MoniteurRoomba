#include "dialogconfiguration.h"
#include "ui_dialogconfiguration.h"

DialogConfiguration::DialogConfiguration(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogConfiguration)
{
    connect(this,SIGNAL(accepted()),this,SLOT(DialogConfiguration_accepted()));
    ui->setupUi(this);
    QStringList l;  // déclaration et construction d’une QStringList
    QString s;      // déclaration et construction d’une QString
    for(int i = 1; i < 16; i++) {
        s=QString("COM%1").arg(i);   // s= “COM” suivi de la valeur de i
        l.append(s);    // ajout de s à la liste l
    }
    ui-> comboPort->addItems(l);    // remplit la ComboBox avec la liste l
}

DialogConfiguration::~DialogConfiguration()
{
    delete ui;
}

void DialogConfiguration::obtenirValeurs()
{
    if(ui->radio4800->isChecked())
    {
        mConfigLiaison.setDebit(4800);
    }

    if(ui->radio9600->isChecked())
    {
        mConfigLiaison.setDebit(9600);
    }

    if(ui->radio19200->isChecked())
    {
        mConfigLiaison.setDebit(19200);
    }

    if(ui->radio28800->isChecked())
    {
        mConfigLiaison.setDebit(28800);
    }

    if(ui->radio38400->isChecked())
    {
        mConfigLiaison.setDebit(38400);
    }

    if(ui->radio57600->isChecked())
    {
        mConfigLiaison.setDebit(57600);
    }

    if(ui->radio115200->isChecked())
    {
        mConfigLiaison.setDebit(115200);
    }

    mConfigLiaison.setPort(ui->comboPort->currentText());
}

void DialogConfiguration::DialogConfiguration_accepted()
{
    obtenirValeurs();
}
