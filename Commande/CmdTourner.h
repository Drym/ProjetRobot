#ifndef UML_CMDTOURNER_H
#define UML_CMDTOURNER_H

#include "Commandex.h"

class CmdTourner : public Commandex {

private:
    string direction;

protected:
    Commandex* constructeurVirtuel();

public:
    void execute();

};

#endif //UML_CMDTOURNER_H
