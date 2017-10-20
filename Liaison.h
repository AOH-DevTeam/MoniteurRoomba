/** @file
 *  @copyright LGPL v3
 *  @date 14/09/2017
 *  @author FORTIN Pierre
 */

/**
 * @brief Réalise la communication avec le Roomba
 * @details
 * Elle réalise la configuration, l'ouverture et la ermeture de la connexion.
 * Elle gère la réception de trames suivant le protocole ROI (Roomba Open Interface).
 */

#ifndef LIAISON_H
#define LIAISON_H

#include <QtSerialPort/QSerialPort>
#include "ConfigLiaison.h"
#include "Trame.h"

class Liaison {

private:
    /**
     * @brief mCfg La configuration de la liaison
     */
	ConfigLiaison mCfg;
    /**
     * @brief mLS Accès au port de communication série
     */
	QSerialPort mLS;
    /**
     * @brief mConnexionEtablie L'état de la liaison : true lors de la connexion au Roomba est réalisée.
     */
    bool mConnexionEtablie;
public:
    Liaison();
    bool ConnexionEtablie() const;
    /**
     * @brief Définir la configuration de la liaison
     * @param cfg La configuration de la liaison
     */
    void configurer(ConfigLiaison cfg);
    /**
     * @brief Établir la connexion au Roomba
     * @return Retour: True si la connexion est réalisée
     */
	bool connecter();
    /**
     * @brief Refermer la connexion au Roomba
     * @return Retour: True si la connexion est refermée
     */
	bool deconnecter();
    /**
     * @brief Envoyer au Roomba une commande
     * @param Paramètre commande: La commande a envoyer
     */
	void envoyerCommande(QByteArray commande);
    /**
     * @brief Lire la trame envoyée par le Roomba.
     * @return Retour: La trame obtenue
     */
	Trame lireTrame();
};

#endif
