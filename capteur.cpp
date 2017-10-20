#include "capteur.h"
Capteur::Capteur()
{

}

qint32 Capteur::valeur(qint32 echantillon)
{
    if( (echantillon < 0) || !(echantillon < nombreEchantillons()))
    {
        return mValeurs.back();
     }
     else
     {
    return mValeurs.at(echantillon);
    }
}

void Capteur::ajouterValeur(qint32 valeur)
{
    mValeurs.push_back(valeur);
}

qint32 Capteur::nombreEchantillons()
{
    return mValeurs.size();
}

