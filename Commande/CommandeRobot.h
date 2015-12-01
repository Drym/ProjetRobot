#ifndef PROJETROBOT_COMMANDEROBOT_H
#define PROJETROBOT_COMMANDEROBOT_H

using namespace std;

#include "Robot/Robot.h"
#include "Commandex.h"

class CommandeRobot : public Commandex{

protected:
    virtual Commandex* constructeurVirtuel(Invocateur*) = 0;
    Robot* _robot;

public:
    CommandeRobot(string c) : Commandex(c){}
    void setRobot(Robot* robot){_robot = robot;}
    virtual void execute() = 0;
};

#endif //PROJETROBOT_COMMANDEROBOT_H
