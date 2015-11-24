//
// Created by user on 03/11/15.
//

#ifndef PROJETROBOT_ROBOTENCHARGE_H
#define PROJETROBOT_ROBOTENCHARGE_H

#include <iostream>
#include "RobotEnRoute.h"

class RobotEnCharge : public RobotEnRoute{
private:
    static RobotEnCharge instance;

protected:
    RobotEnCharge() = default;
    virtual ~RobotEnCharge() = default;

public:
    virtual EtatRobot* rencontrerPlot() const;
    virtual EtatRobot* avancer() const;
    virtual EtatRobot* tourner() const;
    static RobotEnCharge* getInstance();
};


#endif //PROJETROBOT_ROBOTENCHARGE_H
