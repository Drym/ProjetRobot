//
// Created by user on 03/11/15.
//

#ifndef PROJETROBOT_ROBOTENCHARGEFACEPLOT_H
#define PROJETROBOT_ROBOTENCHARGEFACEPLOT_H

#include <iostream>
#include "RobotEnRoute.h"

class RobotEnChargeFacePlot : public RobotEnRoute{

private:
    static RobotEnChargeFacePlot instance;

protected:
    RobotEnChargeFacePlot() = default;
    virtual ~RobotEnChargeFacePlot() = default;

public:
    static RobotEnChargeFacePlot& getInstance();

};


#endif //PROJETROBOT_ROBOTENCHARGEFACEPLOT_H
