#ifndef UML_CMDSAISIR_H
#define UML_CMDSAISIR_H



#include "Commandex.h"
#include "Robot/Objet.h"

class CmdSaisir : public Commandex {

private:
    Objet* o;
    static CmdSaisir instance;

protected:
    Commandex* constructeurVirtuel(Invocateur*);

public:
    CmdSaisir() : Commandex("saisir"){}
    void execute(Robot* robot);

};

#endif //UML_CMDSAISIR_H