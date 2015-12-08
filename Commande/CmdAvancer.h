#ifndef UML_CMDAVANCER_H
#define UML_CMDAVANCER_H

#include "CommandeRobot.h"

class CmdAvancer : public CommandeRobot {

private:
    int _x;
    int _y;
    int _lastX;
    int _lastY;
    static CmdAvancer instance;

protected:
    Commandex* constructeurVirtuel(Invocateur*);

public:
    CmdAvancer(int x=0, int y=0) : CommandeRobot("avancer"), _x(x), _y(y), _lastX(0), _lastY(0){}
    void execute();
    void desexecute();

};


#endif //UML_CMDAVANCER_H