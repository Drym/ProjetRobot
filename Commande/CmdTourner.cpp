#include "CmdTourner.h"

CmdTourner CmdTourner::instance = CmdTourner();

Commandex* CmdTourner::constructeurVirtuel(Invocateur* invocateur) {
    string dir = invocateur->getString();
    return new CmdTourner(dir);
}

void CmdTourner::execute() {
    lastDirection = _robot->getDirection();
    _robot->tourner(direction);
    cmdStack.push(this);
}

void CmdTourner::desexecute(){
    _robot->tourner(lastDirection);
}