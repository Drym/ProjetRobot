#ifndef UML_CMDAVANCER_H
#define UML_CMDAVANCER_H

#include "Commandex.h"

class CmdAvancer : public Commandex {

private:
    int _x;
    int _y;
    static CmdAvancer instance;

protected:
    Commandex* constructeurVirtuel(Invocateur*);

public:
    CmdAvancer(int x=0, int y=0) : Commandex("avancer"), _x(x), _y(y){}
    void execute(Robot* robot);

};


#endif //UML_CMDAVANCER_H