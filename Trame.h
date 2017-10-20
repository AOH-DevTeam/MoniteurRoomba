/** @file
 *  @copyright LGPL v3
 *  @date 14/09/2017
 *  @author FORTIN Pierre
 */

#ifndef TRAME_H
#define TRAME_H

#include <QtGlobal>

/**
  * @brief Stocke une trame comme suite d'octets,
  * et permet d'extraire des valeurs à une poistion et selon un format donné,
  * suivant les types employés dans le protocole ROI.
  */
class Trame {

public:
    /**
     * @brief Extrait de la trame la valeur d’un bit
     * @param pos: L'adresse de l'octet dans la trame
     * @param bit: Le rang du bit à extraire (en commençant à 0 pour le LSB)
     * @return Retour: La valeur du bit désigné
     */
	qint32 getBit(quint8 pos, quint8 bit);
    /**
     * @brief Extrait de la trame un octet non signé
     * @param pos: L'adresse de l'octet dans la trame
     * @return Retour: La veleur de l'octet à la position spécifiée
     */
	qint32 getUnsignedByte(quint8 pos);
    /**
     * @brief Extrait de la trame un octet signé
     * @param pos: L'adresse de l'octet dans la trame, en réalisant l’extension de signe sur 32 bits
     * @return Retour: La valeur de l’octet à la position spécifié
     */
	qint32 getSignedByte(quint8 pos);
    /**
     * @brief Extrait de la trame un mot 16 bit non signé
     * @param pos: L'adresse du 1er octet dans la trame
     * @return Retour: Le mot formé par [pos] (MSB) et [pos+1] (LSB)
     */
	qint32 getUnsignedWord(quint8 pos);
    /**
     * @brief Extrait de la trame un mot 16 bit signé, en réalisant l’extension de signe sur 32 bits
     * @param pos: L'adresse du 1er octet dans la trame
     * @return Retour: Le mot formé par [pos] (MSB) et [pos+1] (LSB)
     */
	qint32 getSignedWord(quint8 pos);

};

#endif
