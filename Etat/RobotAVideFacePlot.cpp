//
// Created by user on 03/11/15.
//

#include "RobotAVideFacePlot.h"
#include "RobotEnChargeFacePlot.h"

EtatRobot * RobotAVideFacePlot::saisir() {
    return RobotEnChargeFacePlot.instance();
}