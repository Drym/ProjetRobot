#ifndef UML_CMDSAISIR_H
#define UML_CMDSAISIR_H



#include "Commandex.h"
#include "Robot/Objet.h"

class CmdSaisir : public Commandex {

private:
    Objet* o;
    Commandex* constructeurVirtuel();

public:
    virtual void execute();

};

#endif //UML_CMDSAISIR_H