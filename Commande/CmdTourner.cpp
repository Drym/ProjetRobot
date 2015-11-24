#include "CmdTourner.h"

Commandex* CmdTourner::constructeurVirtuel(Invocateur* invocateur) {
    return new CmdTourner();
}

void CmdTourner::execute() {
    robot->tourner(direction);
}