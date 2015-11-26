#ifndef UML_COMMANDEX_H
#define UML_COMMANDEX_H

#include <map>
#include "Robot/Robot.h"
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
    virtual void execute(Robot* robot) = 0;


};

#endif //UML_COMMANDEX_H
