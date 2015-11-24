#include "CmdSaisir.h"

Commandex* CmdSaisir::constructeurVirtuel(Invocateur* invocateur) {
    return new CmdSaisir();
}

void CmdSaisir::execute() {
    robot->saisir(o);
}

