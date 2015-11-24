#ifndef UML_COMMANDEX_H
#define UML_COMMANDEX_H

#include <map>
#include "Robot/Robot.h"

using namespace std;

class Commandex {

private:
    map<string, Commandex*> cmdInscrites;

protected:
    Robot* robot;
    Commandex* constructeurVirtuel();

public:
    static Commandex* nouvelleCmd(string s);
    void execute();


};

#endif //UML_COMMANDEX_H
