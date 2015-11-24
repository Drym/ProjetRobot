#include "CmdRencontrerPlot.h"


Commandex* CmdRencontrerPlot::constructeurVirtuel(Invocateur* invocateur) {
    return new CmdRencontrerPlot();
}

void CmdRencontrerPlot::execute() {
    robot->rencontrerPlot(p);
}

