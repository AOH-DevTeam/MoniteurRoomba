#include "test.h"
#include <QDebug>

Test::Test()
{

}

bool Test::charger(QString nomFichier)
{
    qDebug() << "Test ouverture, nom du fichier :" << nomFichier;
    return true;
}

bool Test::enregistrer(QString nomFichier)
{
    qDebug() << "Enregistrement du fichier :" << nomFichier;
    return true;
}
