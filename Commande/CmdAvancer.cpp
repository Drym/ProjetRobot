#include "CmdAvancer.h"

CmdAvancer CmdAvancer::instance = CmdAvancer();

Commandex* CmdAvancer::constructeurVirtuel(Invocateur* invocateur) {
    x = invocateur->getInt();
    y = invocateur->getInt();
    robot = invocateur->getRobot();
    return new CmdAvancer();
}

void CmdAvancer::execute() {
    robot->avancer(x, y);
}