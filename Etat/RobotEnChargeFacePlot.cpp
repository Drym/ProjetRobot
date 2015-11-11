//
// Created by user on 03/11/15.
//
#include "RobotEnChargeFacePlot.h"

using namespace std;

RobotEnChargeFacePlot RobotEnChargeFacePlot::instance=RobotEnChargeFacePlot();

RobotEnChargeFacePlot* RobotEnChargeFacePlot::getInstance() {
    return &instance;
}