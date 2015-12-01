#include "CmdSaisir.h"

CmdSaisir CmdSaisir::instance = CmdSaisir();

Commandex* CmdSaisir::constructeurVirtuel(Invocateur* invocateur) {
    return new CmdSaisir();
}

void CmdSaisir::execute() {
    _robot->saisir(o);
}

