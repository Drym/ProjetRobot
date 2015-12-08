#ifndef UML_CMDTOURNER_H
#define UML_CMDTOURNER_H

#include "CommandeRobot.h"

class CmdTourner : public CommandeRobot {

private:
    string direction;
    string lastDirection;
    static CmdTourner instance;

protected:
    Commandex* constructeurVirtuel(Invocateur*);

public:
    CmdTourner(string dir = "nord") : CommandeRobot("tourner"), direction(dir){}
    void execute();
    void desexecute();

};

#endif //UML_CMDTOURNER_H
