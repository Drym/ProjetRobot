#include "CmdTourner.h"

CmdTourner CmdTourner::instance = CmdTourner();

Commandex* CmdTourner::constructeurVirtuel(Invocateur* invocateur) {
    robot = invocateur->getRobot();
    return new CmdTourner();
}

void CmdTourner::execute() {
    robot->tourner(direction);
}