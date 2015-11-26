#ifndef UML_CMDTOURNER_H
#define UML_CMDTOURNER_H

#include "Commandex.h"

class CmdTourner : public Commandex {

private:
    string direction;
    static CmdTourner instance;

protected:
    Commandex* constructeurVirtuel(Invocateur*);

public:
    CmdTourner(string dir = "nord") : Commandex("tourner"), direction(dir){}
    void execute(Robot* robot);

};

#endif //UML_CMDTOURNER_H
