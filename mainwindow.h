/** file
 * copyright LGPL v3
 * date 14/09/2017
 * author FORTIN Pierre
 */

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "acquisition.h"
#include "Liaison.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_actionOuvrir_triggered();

    void on_actionEnregistrer_triggered();

    void on_actionConnecter_triggered();

    void on_actionDeconnecter_triggered();

    void on_actionAcquerir_les_mesures_triggered();

    void on_actionArreter_l_acquisition_triggered();

    void on_actionConfigurer_triggered();

private:
    /**
     * @brief La liaison au Romba
     */
    Liaison* mLiaison;
    /**
     * @brief L’acquisition visualisée
     */
    Acquisition* mAcquisition;
    /**
     * @brief L’interface graphique
     */
    Ui::MainWindow *ui;

};

#endif // MAINWINDOW_H
