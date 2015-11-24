#ifndef UML_CMDAVANCER_H
#define UML_CMDAVANCER_H

#include "Commandex.h"

class CmdAvancer : public Commandex {

private:
    int x;
    int y;

protected:
    Commandex* constructeurVirtuel(Invocateur*);

public:
    void execute();

};


#endif //UML_CMDAVANCER_H