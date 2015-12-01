#ifndef UML_CMDSAISIR_H
#define UML_CMDSAISIR_H


#include "CommandeRobot.h"
#include "Robot/Objet.h"

class CmdSaisir : public CommandeRobot {

private:
    Objet* o;
    static CmdSaisir instance;

protected:
    Commandex* constructeurVirtuel(Invocateur*);

public:
    CmdSaisir() : CommandeRobot("saisir"){}
    void execute();

};

#endif //UML_CMDSAISIR_H