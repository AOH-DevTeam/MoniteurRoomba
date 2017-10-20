#include "Liaison.h"
#include <iostream>
void Liaison::configurer(ConfigLiaison cfg) {


}

bool Liaison::connecter() {

    bool answer=0;
    std::cout << "La liaison est-elle établie ? (0 = Non, 1 = Oui)";
    std::cin >> answer;

    return answer;

}

bool Liaison::deconnecter() {

}

void Liaison::envoyerCommande(QByteArray commande) {

}

Trame Liaison::lireTrame() {

}

bool Liaison::ConnexionEtablie() const {
    return mConnexionEtablie;
}

Liaison::Liaison() {

}
