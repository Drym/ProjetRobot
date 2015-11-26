#include "CmdRencontrerPlot.h"

CmdRencontrerPlot CmdRencontrerPlot::instance = CmdRencontrerPlot();

Commandex* CmdRencontrerPlot::constructeurVirtuel(Invocateur* invocateur) {
    return new CmdRencontrerPlot();
}

void CmdRencontrerPlot::execute(Robot* robot) {
    robot->rencontrerPlot(p);
}

