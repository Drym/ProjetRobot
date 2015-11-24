#include "CmdAvancer.h"

Commandex* CmdAvancer::constructeurVirtuel(Invocateur* invocateur) {
    x =
    return new CmdAvancer();
}

void CmdAvancer::execute() {
    robot->avancer(x, y);
}