#include "CmdSaisir.h"

CmdSaisir CmdSaisir::instance = CmdSaisir();

Commandex* CmdSaisir::constructeurVirtuel(Invocateur* invocateur) {
    return new CmdSaisir();
}

void CmdSaisir::execute() {
    cmdStack.push(this);
    _robot->saisir(o);
}

void CmdSaisir::desexecute(){

}