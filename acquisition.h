/** @file
 *  @copyright LGPL v3
 *  @date 21/09/2017
 *  @author FORTIN Pierre
 */


#ifndef ACQUISITION_H
#define ACQUISITION_H
#include <QtGlobal>
#include <QTimer>
#include "capteur.h"
#include "ecapt.h"
#include "Liaison.h"
/**
 * @brief Une acquisition est l’ensemble des séries de valeurs enregistrées par les capteurs. La classe permet
de démarrer une acquisition, de l’arrêter, de la sauvegarder dans un fichier ou de charger une
acquisition depuis un fichier. Pour acquérir les valeurs du Roomba, la communication sera faite au
moyen d’un objet Liaison.
 */
class Acquisition
{
private:

    Capteur* mCapteurs[];
    /**
     * @brief Un compteur du nombre de trames
incomplètes (tous les capteurs
n’ont pas fournis de valeur).
     */
    qint32 mNbTramesIncompletes;
    /**
     * @brief Canal de communication vers le Roomba
     */
    Liaison* mLiaison;
    /**
     * @brief Timer déclenché à chaque période d’échantillonnage
     */
    QTimer* mTimer;


public:
    /**
     * @brief Constructeur de la classe
     */
    Acquisition();
    /**
     * @brief Destructeur de la classe
     */
    ~Acquisition();

    /**
     * @brief demarrer
     * @return
     */
    bool demarrer();
    /**
     * @brief Démarre l’acquisition des mesures. Si nécessaire, la connexion est réalisée. En cas d'échec, renvoie false. Ensuite, démarre les cycles d’échantillonnage des capteurs.
     */
    bool arreter();
    /**
     * @brief Enregistre les mesures dans un fichier
     * @param Le nom du fichier où enregistrer les mesures
     */
    void sauvegarder(QString nomFichier);
    /**
     * @brief Charge une jeu de mesures préalablement sauvegardées dans un fichier
     * @param Le nom du fichier à charger
     * @return Renvoie False en cas d’échec
     */
    bool charger (QString nomFichier);
    /**
     * @brief nombreEchantillons
     * @return Renvoie le nombre d’échantillons enregistrés
     */
    qint32 nombreEchantillons();
    /**
     * @brief valeur
     * @param Paramètre idCapteur: le capteur à restituer.
     * @param Paramètre echantillon: le numéro d’échantillon à restituer; si le numéro est hors plage (<0 ou >nb d’échantillons), la dernière valeur enregistrée est restituée.
     * @return Renvoie la valeur enregistrée par le capteur
     */
    qint32 valeur (eCapt idCapteur, qint32 echantillon);
};

#endif // ACQUISITION_H
