//
// Created by user on 03/11/15.
//

#ifndef PROJETROBOT_ROBOTENROUTE_H
#define PROJETROBOT_ROBOTENROUTE_H

#include <iostream>
#include "EtatRobot.h"

class RobotEnRoute : public EtatRobot {
public:
    RobotEnRoute() = default;
    virtual ~RobotEnRoute() = default;

    virtual EtatRobot& rencontrerPlot();
    virtual EtatRobot& saisir();
};


#endif //PROJETROBOT_ROBOTENROUTE_H
