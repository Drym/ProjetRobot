#include "CmdRencontrerPlot.h"

CmdRencontrerPlot CmdRencontrerPlot::instance = CmdRencontrerPlot();

Commandex* CmdRencontrerPlot::constructeurVirtuel(Invocateur* invocateur) {
    return new CmdRencontrerPlot();
}

void CmdRencontrerPlot::execute() {
    cmdStack.push(this);
    _robot->rencontrerPlot(p);
}

void CmdRencontrerPlot::desexecute(){

}