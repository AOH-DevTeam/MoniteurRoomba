#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dialogconfiguration.h"
#include <QFileDialog>
#include "test.h"
#include <QMessageBox>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    mLiaison(new Liaison),
    mAcquisition (new Acquisition),
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete mLiaison;
    delete mAcquisition;
    delete ui;
}


void MainWindow::on_actionOuvrir_triggered()
{
    QStringList listeNomFichier;
    QString nomFichier;

    QFileDialog dialog(this);
    dialog.setAcceptMode(QFileDialog::AcceptOpen);
    dialog.setFileMode(QFileDialog::ExistingFiles);
    dialog.setNameFilter(tr("Acquisition Roomba (*.drmb")); // Filtre la liste des fichiers, on ne peut que sélectionner les fichiers.drmb
    dialog.setViewMode(QFileDialog::Detail); // Affiche l'explorateur de fichier en mode Detail

    if (dialog.exec() == QDialog::Rejected)
        return;
    listeNomFichier = dialog.selectedFiles();
    nomFichier=listeNomFichier[0];

    Test t;
    bool resultat;
    resultat = t.charger(nomFichier);
    if(!resultat) {
        QMessageBox msgBox;
        msgBox.setText("Le fichier n'a pas été ouvert.");
        msgBox.exec();
    }
}

void MainWindow::on_actionEnregistrer_triggered()
{
    QStringList listeNomFichier;
    QString nomFichier;

    QFileDialog dialog(this);
    dialog.setAcceptMode(QFileDialog::AcceptSave);
    dialog.setFileMode(QFileDialog::AnyFile);
    dialog.setNameFilter(tr("Données Roomba (*.drmb")); // Filtre la liste des fichiers, on ne peut que sélectionner les fichiers.drmb
    dialog.setViewMode(QFileDialog::Detail); // Affiche l'explorateur de fichier en mode Detail
    dialog.setDefaultSuffix("drmb"); // Enregistre le fichier au format ".drmb"

    if (dialog.exec() == QDialog::Rejected)
        return;
    listeNomFichier = dialog.selectedFiles();
    nomFichier=listeNomFichier[0];

    Test t;
    bool resultat;
    resultat = t.enregistrer(nomFichier);
    if(!resultat) {
        QMessageBox msgBox;
        msgBox.setText("Le fichier n'a pas été enregistré :(.");
        msgBox.exec();
    }
}

void MainWindow::on_actionConnecter_triggered()
{
    Liaison t;
    if(t.connecter()){
    ui->actionDeconnecter->setEnabled(true);
    ui->actionConnecter->setEnabled(false);
    }
}

void MainWindow::on_actionDeconnecter_triggered()
{
    Liaison t;
    if(t.deconnecter()){
    ui->actionDeconnecter->setEnabled(false);
    ui->actionConnecter->setEnabled(true);
    }
}

void MainWindow::on_actionAcquerir_les_mesures_triggered()
{
    Acquisition t;
    if(t.demarrer())
    {
        ui->actionAcquerir_les_mesures->setEnabled(false);
        ui->actionArreter_l_acquisition->setEnabled(true);
    }
}


void MainWindow::on_actionArreter_l_acquisition_triggered()
{
    Acquisition t;
     if(t.arreter())
    {
        ui->actionAcquerir_les_mesures->setEnabled(true);
        ui->actionArreter_l_acquisition->setEnabled(false);
    }
}

void MainWindow::on_actionConfigurer_triggered()
{
    DialogConfiguration *dialogConf; //
    dialogConf=new DialogConfiguration; // instancie l'objet dialogConf de la classe DialogConfiguration
    dialogConf->exec(); // Affiche la boîte de dialogue
    qDebug() << "Port:" << dialogConf->mConfigLiaison.port();
    qDebug() << "Debit:" << dialogConf->mConfigLiaison.debit();

    delete(dialogConf);
}
