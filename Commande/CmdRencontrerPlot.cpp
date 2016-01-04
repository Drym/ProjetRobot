#include "CmdRencontrerPlot.h"

CmdRencontrerPlot CmdRencontrerPlot::instance = CmdRencontrerPlot();

Commandex* CmdRencontrerPlot::constructeurVirtuel(Invocateur* invocateur) {
    return new CmdRencontrerPlot();
}

void CmdRencontrerPlot::execute() {
    _robot->rencontrerPlot(p);
    cmdStack.push(this);
}

void CmdRencontrerPlot::desexecute(){
    _robot->tourner(_robot->getDirection());
}