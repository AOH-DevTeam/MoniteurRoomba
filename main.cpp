#include "mainwindow.h"
#include <QApplication>
#include "capteur.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    bool erreur=0;
    Capteur cap;

    cap.ajouterValeur(6);
    if(cap.nombreEchantillons()!= 1){
        erreur = 1;
    }

    else if(cap.valeur(-1)!= 6)
    {
        erreur = 1;
    }
    else if(cap.valeur(0)!=6)
    {
        erreur = 1;
    }
    else if(cap.valeur(1)!=6)
    {
        erreur = 1;
    }
    else if(cap.valeur(2)!=6)
    {
        erreur = 1;
    }
    else if(cap.valeur(3)!=6)
    {
        erreur = 1;
    }

    cap.ajouterValeur(12);
    if(cap.nombreEchantillons()!= 2){
        erreur = 1;
    }

    else if(cap.valeur(-1)!= 12)
    {
        erreur = 1;
    }
    else if(cap.valeur(0)!=6)
    {
        erreur = 1;
    }
    else if(cap.valeur(1)!=12)
    {
        erreur = 1;
    }
    else if(cap.valeur(2)!=12)
    {
        erreur = 1;
    }
    else if(cap.valeur(3)!=12)
    {
        erreur = 1;
    }

    cap.ajouterValeur(9);
    if(cap.nombreEchantillons()!= 3){
        erreur = 1;
    }

    else if(cap.valeur(-1)!= 9)
    {
        erreur = 1;
    }
    else if(cap.valeur(0)!=6)
    {
        erreur = 1;
    }
    else if(cap.valeur(1)!=12)
    {
        erreur = 1;
    }
    else if(cap.valeur(2)!=9)
    {
        erreur = 1;
    }
    else if(cap.valeur(3)!=9)
    {
        erreur = 1;
    }
    printf("%d\n",erreur);

    w.show();
    return a.exec();
}
