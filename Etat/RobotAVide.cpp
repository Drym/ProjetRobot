//
// Created by user on 03/11/15.
//

#include "RobotAVide.h"
#include "EtatRobot.h"
#include "RobotAVideFacePlot.h"


EtatRobot* RobotAVide::renconterPlot() {
    return RobotAVideFacePlot.instance();
}
