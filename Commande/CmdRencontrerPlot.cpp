#include "CmdRencontrerPlot.h"

CmdRencontrerPlot CmdRencontrerPlot::instance = CmdRencontrerPlot();

Commandex* CmdRencontrerPlot::constructeurVirtuel(Invocateur* invocateur) {
    return new CmdRencontrerPlot();
}

void CmdRencontrerPlot::execute() {
    _robot->rencontrerPlot(p);
}

