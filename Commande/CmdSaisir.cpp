#include "CmdSaisir.h"

CmdSaisir CmdSaisir::instance = CmdSaisir();

Commandex* CmdSaisir::constructeurVirtuel(Invocateur* invocateur) {
    robot = invocateur->getRobot();
    return new CmdSaisir();
}

void CmdSaisir::execute() {
    robot->saisir(o);
}

