//
// Created by user on 03/11/15.
//
#include "RobotEnCharge.h"
#include "RobotEnChargeFacePlot.h"
#include "RobotAVideFacePlot.h"

using namespace std;

RobotEnChargeFacePlot RobotEnChargeFacePlot::instance=RobotEnChargeFacePlot();

RobotEnChargeFacePlot* RobotEnChargeFacePlot::getInstance() {
    return &instance;
}

EtatRobot* RobotEnChargeFacePlot::tourner() const{
    return RobotEnCharge::getInstance();
}

EtatRobot* RobotEnChargeFacePlot::poser() const{
    return RobotAVideFacePlot::getInstance();
}