#include "Robot/Robot.h"
#include "Affichage/Afficheur.h"

using namespace std;

int main() {

    Plot* plot = new Plot(10);
    Objet* objet = new Objet(5);
    Position pos(0,0);
    Robot* robot = new Robot("nord", pos);
    Observateur* obs = new Afficheur(robot);
    robot->attacherObservateur(obs);

    cout << "Erreur OK : ";
    robot->saisir(objet);
    cout << "Pas d'erreur ensuite !!!" << endl;
    robot->rencontrerPlot(plot);

    robot->saisir(objet);
}
