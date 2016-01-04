#include "CmdSaisir.h"

CmdSaisir CmdSaisir::instance = CmdSaisir();

Commandex* CmdSaisir::constructeurVirtuel(Invocateur* invocateur) {
    return new CmdSaisir();
}

void CmdSaisir::execute() {
    _robot->saisir(o);
    cmdStack.push(this);
}

void CmdSaisir::desexecute(){
    _robot->rencontrerPlot(_robot->getPlot());
    _robot->poser();
}