//
// Created by user on 03/11/15.
//

#include "EtatRobot.h"

using namespace std;

EtatRobot* EtatRobot::rencontrerPlot() const{
    throw NoActionDefinedException("rencontrerPlot");
}

EtatRobot* EtatRobot::saisir() const{
    throw NoActionDefinedException("saisir");
}

EtatRobot* EtatRobot::poser() const{
    throw NoActionDefinedException("poser");
}

EtatRobot* EtatRobot::avancer() const{
    throw NoActionDefinedException("avancer");
}

EtatRobot* EtatRobot::tourner() const{
    throw NoActionDefinedException("tourner");
}