#include "Robot.h"

using namespace std;

void Robot::rencontrerPlot(Plot* p){

    try {
        etatRobot = etatRobot->rencontrerPlot();
        this->plot = p;
        dernierOrdre = "rencontrerPlot";
        notifier();
    }
    catch (EtatRobot::NoActionDefinedException e) {
        e.getMessageError();
    }

}
void Robot::saisir(Objet* o){

    try {
        etatRobot = etatRobot->saisir();
        this->objet = o;
        dernierOrdre = "saisir";
        notifier();
    }
    catch (EtatRobot::NoActionDefinedException e) {
        e.getMessageError();
    }

}