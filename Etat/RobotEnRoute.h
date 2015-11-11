//
// Created by user on 03/11/15.
//

#ifndef PROJETROBOT_ROBOTENROUTE_H
#define PROJETROBOT_ROBOTENROUTE_H

#include <iostream>
#include "EtatRobot.h"

class RobotEnRoute : public EtatRobot {
public:
    RobotEnRoute():EtatRobot(){};
    virtual ~RobotEnRoute() = default;
};


#endif //PROJETROBOT_ROBOTENROUTE_H
