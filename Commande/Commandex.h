#ifndef UML_COMMANDEX_H
#define UML_COMMANDEX_H

#include <map>
#include "Robot/Robot.h"

using namespace std;

class Commandex {

private:
    static map<string, Commandex*>& cmdInscrites();

protected:
    Robot* robot;
    virtual Commandex* constructeurVirtuel() = 0;

public:
    static Commandex* nouvelleCmd(string s);
    virtual void execute() = 0;


};

#endif //UML_COMMANDEX_H
