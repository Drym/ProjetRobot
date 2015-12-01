#ifndef UML_COMMANDEX_H
#define UML_COMMANDEX_H

#include <map>
#include "Invocateur.h"

using namespace std;

class Commandex {

private:
    static map<string, Commandex*>& cmdInscrites();

protected:
    virtual Commandex* constructeurVirtuel(Invocateur*) = 0;

public:
    Commandex(string c);
    static Commandex* nouvelleCmd(string s, Invocateur* invocateur);
    virtual void setRobot(Robot* robot) = 0;
    virtual void execute() = 0;


};

#endif //UML_COMMANDEX_H
