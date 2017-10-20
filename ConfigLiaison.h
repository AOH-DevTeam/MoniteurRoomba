/** @file
 *  @copyright LGPL v3
 *  @date 14/09/2017
 *  @author FORTIN Pierre
 */


#ifndef ConfigLiaison_H
#define ConfigLiaison_H
#include <QString>

/**
  * @brief Cette classe définit les paramètres de la liaison.
  * En première approche, seule la liaison série est envisagée.
  * Les attributs de la classe sont les paramètres de la liaison série.
  */

class ConfigLiaison {

private:
    /**
     * @brief Le nom de port de communication
     */
    QString mPort;
    /**
     * @brief Le débit de communication en baud
     */
    int mDebit;


public:
    QString port() const;
    int debit() const;
    void setPort(QString port);
    void setDebit(int debit);
};

#endif
