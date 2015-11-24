#include "CmdTourner.h"

Commandex* CmdTourner::constructeurVirtuel() {
    return new CmdTourner();
}

void CmdTourner::execute() {
    robot->tourner(direction);
}