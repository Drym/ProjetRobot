#include "Robot/Robot.h"
#include "Affichage/Afficheur.h"
#include "Commande/Invocateur.h"

using namespace std;

int main() {

    Plot* plot = new Plot(10);
    Objet* objet = new Objet(5);
    Position pos(0,0);
    Robot* robot = new Robot("nord", pos);
    Observateur* obs = new Afficheur(robot);
    robot->attacherObservateur(obs);

    Invocateur* invoc = new Invocateur(robot);

    while(invoc->lireCommande());


}
