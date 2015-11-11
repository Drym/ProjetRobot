#include "Robot.h"
#include <iostream>
#include "Etat/EtatRobot.h"

using namespace std;

void Robot::rencontrerPlot(Plot p){


    try {
        etatRobot = etatRobot->rencontrerPlot();
        this->plot = p;
    }
    catch (EtatRobot::NoActionDefinedException e) {
        e.getMessageError();
    }

}
void Robot::saisir(Objet o){

    try {
        etatRobot = etatRobot->saisir();
        this->objet = o;
    }
    catch (EtatRobot::NoActionDefinedException e) {
        e.getMessageError();
    }

}

void Robot::attacherObservateur(Observateur *obs){
    observateurs.push_back(obs);
}

void Robot::detacherObservateur(Observateur *obs){

}

void Robot::notifier(){
    for (int i = 0; i < observateurs.size(); ++i) {
        observateurs[i]->mettreAJour();
    }
}