#include "CmdRencontrerPlot.h"

CmdRencontrerPlot CmdRencontrerPlot::instance = CmdRencontrerPlot();

Commandex* CmdRencontrerPlot::constructeurVirtuel(Invocateur* invocateur) {
    robot = invocateur->getRobot();
    return new CmdRencontrerPlot();
}

void CmdRencontrerPlot::execute() {
    robot->rencontrerPlot(p);
}

