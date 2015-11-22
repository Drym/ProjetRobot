#include "CmdAvancer.h"
#include "Commandex.h"

Commandex* CmdAvancer::constructeurVirtuel() {
    return new CmdAvancer();
}

void CmdAvancer::execute() {
    robot->avancer(x, y);
}