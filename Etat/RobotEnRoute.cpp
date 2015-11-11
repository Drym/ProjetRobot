//
// Created by user on 03/11/15.
//

#include "RobotEnRoute.h"

using namespace std;

EtatRobot& RobotEnRoute::rencontrerPlot() {
    throw EtatRobot::NoActionDefinedException("rencontrerPlot");
}

EtatRobot& RobotEnRoute::saisir() {
    throw EtatRobot::NoActionDefinedException("saisir");
}