#ifndef DIALOGCONFIGURATION_H
#define DIALOGCONFIGURATION_H

#include <QDialog>
#include "ConfigLiaison.h"

namespace Ui {
class DialogConfiguration;
}

class DialogConfiguration : public QDialog
{
    Q_OBJECT

public:
    ConfigLiaison mConfigLiaison;
    explicit DialogConfiguration(QWidget *parent = 0);
    ~DialogConfiguration();

private:
    void obtenirValeurs();
    Ui::DialogConfiguration *ui;

private slots:
    void DialogConfiguration_accepted();
};

#endif // DIALOGCONFIGURATION_H
