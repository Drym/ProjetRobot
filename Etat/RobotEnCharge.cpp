//
// Created by user on 03/11/15.
//
#include "RobotEnCharge.h"
#include "RobotEnChargeFacePlot.h"

using namespace std;

RobotEnCharge RobotEnCharge::instance=RobotEnCharge();

RobotEnCharge& RobotEnCharge::getInstance() {
    return instance;
}

EtatRobot& RobotEnCharge::rencontrerPlot() {
    return RobotEnChargeFacePlot::getInstance();
}