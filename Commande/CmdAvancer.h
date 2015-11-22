#ifndef UML_CMDAVANCER_H
#define UML_CMDAVANCER_H

#endif //UML_CMDAVANCER_H

#include "Commandex.h"

class CmdAvancer : public Commandex {

private:
    int x;
    int y;

    Commandex* constructeurVirtuel();

public:
    virtual void execute();

};