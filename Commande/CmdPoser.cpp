#include "CmdPoser.h"

CmdPoser CmdPoser::instance = CmdPoser();

Commandex* CmdPoser::constructeurVirtuel(Invocateur* invocateur) {
    return new CmdPoser();
}

void CmdPoser::execute() {
    o = _robot->getObjet();
    _robot->poser();
    cmdStack.push(this);
}

void CmdPoser::desexecute(){
    _robot->rencontrerPlot(_robot->getPlot());
    _robot->saisir(o);
}