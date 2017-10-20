/** @file
 *  @copyright LGPL v3
 *  @date 21/09/2017
 *  @author FORTIN Pierre
 */

#ifndef CAPTEUR_H
#define CAPTEUR_H
#include <stdio.h>
#include <QtGlobal>
#include <vector>
/**
 * @brief La classe contient l’enregistrement de la série de valeurs d’un capteur lors d’une acquisition.
 */
class Capteur
{
private:
    /**
     * @brief La liste des valeurs enregistrées par le capteur
     */
    std::vector<qint32> mValeurs;
public:
    Capteur();
    /**
     * @brief Renvoie la valeur enregistrée par le capteur
     * @param Paramètre echantillon: le numéro d’échantillon à restituer; si le numéro est hors plage (<0 ou >nb d’échantillons),
     *  la dernière valeur enregistrée est restituée.
     * @return
     */
    qint32 valeur(qint32 echantillon);
    /**
     * @brief Enregistre une nouvelle valeur pour le capteur
     * @param valeur
     */
    void ajouterValeur(qint32 valeur);
    /**
     * @brief nombreEchantillons
     * @return Renvoie le nombre d’échantillons enregistrés
     */
    qint32 nombreEchantillons();
};

#endif // CAPTEUR_H
