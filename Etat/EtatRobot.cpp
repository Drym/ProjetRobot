//
// Created by user on 03/11/15.
//

#include "EtatRobot.h"

using namespace std;

EtatRobot& EtatRobot::rencontrerPlot(){
    throw NoActionDefinedException("rencontrerPlot");
}

EtatRobot& EtatRobot::saisir() {
    throw NoActionDefinedException("saisir");
}