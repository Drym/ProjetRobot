#include "CmdTourner.h"

CmdTourner CmdTourner::instance = CmdTourner();

Commandex* CmdTourner::constructeurVirtuel(Invocateur* invocateur) {
    string dir = invocateur->getString();
    return new CmdTourner(dir);
}

void CmdTourner::execute(Robot* robot) {
    robot->tourner(direction);
}