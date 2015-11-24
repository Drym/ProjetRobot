#include "CmdSaisir.h"

Commandex* CmdSaisir::constructeurVirtuel() {
    return new CmdSaisir();
}

void CmdSaisir::execute() {
    robot->saisir(o);
}

