#ifndef UML_CMDAVANCER_H
#define UML_CMDAVANCER_H

#include "CommandeRobot.h"

class CmdAvancer : public CommandeRobot {

private:
    int _x;
    int _y;
    static CmdAvancer instance;

protected:
    Commandex* constructeurVirtuel(Invocateur*);

public:
    CmdAvancer(int x=0, int y=0) : CommandeRobot("avancer"), _x(x), _y(y){}
    void execute();

};


#endif //UML_CMDAVANCER_H