#include "CmdSaisir.h"

CmdSaisir CmdSaisir::instance = CmdSaisir();

Commandex* CmdSaisir::constructeurVirtuel(Invocateur* invocateur) {
    return new CmdSaisir();
}

void CmdSaisir::execute(Robot* robot) {
    robot->saisir(o);
}

