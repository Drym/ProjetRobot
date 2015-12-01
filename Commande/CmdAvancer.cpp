#include "CmdAvancer.h"

CmdAvancer CmdAvancer::instance = CmdAvancer();

Commandex* CmdAvancer::constructeurVirtuel(Invocateur* invocateur) {
    int x = invocateur->getInt();
    int y = invocateur->getInt();
    cout << "x : " << x << " ; y : " << y << endl;
    return new CmdAvancer(x, y);
}

void CmdAvancer::execute() {
    _robot->avancer(_x, _y);
}