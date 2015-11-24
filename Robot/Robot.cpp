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

void Robot::avancer(int x, int y) {
    try {
        etatRobot = etatRobot->avancer();
        position.setX(x);
        position.setY(y);
        dernierOrdre = "avancer";
        notifier();
    }
    catch (EtatRobot::NoActionDefinedException e) {
        e.getMessageError();
    }

}

void Robot::tourner(string direction) {
    try {
        etatRobot = etatRobot->tourner();
        this->direction = direction;
        dernierOrdre = "tourner";
        notifier();
    }
    catch (EtatRobot::NoActionDefinedException e) {
        e.getMessageError();
    }

}