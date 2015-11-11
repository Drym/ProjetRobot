#include "Robot.h"
#include <exception>
#include <iostream>
#include "Etat/EtatRobot.h"

using namespace std;

void Robot::rencontrerPlot(Plot p){


    try {
        etatRobot = etatRobot->rencontrerPlot();
        this->plot = p;
    }
    catch (exception e) {
        cerr << e.what();
    }

}
void Robot::saisir(Objet o){

    try {
        etatRobot = etatRobot->saisir();
        this->objet = o;
    }
    catch (exception e) {
        cerr << e.what();
    }

}
