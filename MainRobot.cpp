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


    /*
    cout << endl;
    cout << "MAIN : Avancer en (5, 5), l'action s'effectue normalement :" << endl;
    robot->avancer(5,5);
    cout << endl;
    cout << "MAIN : Avancer en (7, 7), l'action s'effectue normalement :" << endl;
    robot->avancer(7,7);
    cout << endl;
    cout << "MAIN : Essaye de saisir un objet depuis l'état AVide (l'action ne doit pas s'effectuer) : " << endl;
    robot->saisir(objet);
    cout << endl;
    cout << "MAIN : Rencontrer un plot, l'action s'effectue normalement :" << endl;
    robot->rencontrerPlot(plot);
    cout << endl;
    cout << "MAIN : Essaye d'avancer alors qu'il y a un plot en face (l'action ne doit pas s'effectuer) :" << endl;
    robot->avancer(10,10);
    cout << endl;
    cout << "MAIN : Saisir l'objet sur le plot, l'action s'effectue normalement :" << endl;
    robot->saisir(objet);
    cout << endl;
    cout << "MAIN : touner :" << endl;
    robot->tourner("E");
    robot->tourner("O");
    */

}
