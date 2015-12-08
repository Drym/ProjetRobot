#include "CmdAvancer.h"

CmdAvancer CmdAvancer::instance = CmdAvancer();

Commandex* CmdAvancer::constructeurVirtuel(Invocateur* invocateur) {
    int x = invocateur->getInt();
    int y = invocateur->getInt();
    cout << "x : " << x << " ; y : " << y << endl;
    return new CmdAvancer(x, y);
}

void CmdAvancer::execute() {
    _lastX = _robot->getPosition().getX();
    _lastY = _robot->getPosition().getY();;
    _robot->avancer(_x, _y);
    cmdStack.push(this);
}

void CmdAvancer::desexecute(){
    _robot->avancer(_lastX, _lastY);
}