//
// Created by user on 03/11/15.
//
#include "RobotAVideFacePlot.h"
#include "RobotEnChargeFacePlot.h"

using namespace std;

RobotAVideFacePlot RobotAVideFacePlot::instance=RobotAVideFacePlot();

RobotAVideFacePlot* RobotAVideFacePlot::getInstance() {
    return &instance;
}

EtatRobot* RobotAVideFacePlot::saisir() const{
    return RobotEnChargeFacePlot::getInstance();
}