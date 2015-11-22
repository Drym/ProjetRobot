#include "CmdRencontrerPlot.h"

#include "Commandex.h"

Commandex* CmdRencontrerPlot::constructeurVirtuel() {
    return new CmdRencontrerPlot();
}

void CmdRencontrerPlot::execute() {
    robot->rencontrerPlot(p);
}

