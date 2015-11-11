//
// Created by user on 03/11/15.
//

#ifndef PROJETROBOT_ROBOTAVIDEFACEPLOT_H
#define PROJETROBOT_ROBOTAVIDEFACEPLOT_H

#include <iostream>
#include "RobotEnRoute.h"


class RobotAVideFacePlot : public RobotEnRoute{

private:
    static RobotAVideFacePlot instance;

protected:
    RobotAVideFacePlot():RobotEnRoute(){};
    virtual ~RobotAVideFacePlot() = default;

public:
    virtual EtatRobot& saisir();
    static RobotAVideFacePlot& getInstance();

};


#endif //PROJETROBOT_ROBOTAVIDEFACEPLOT_H
