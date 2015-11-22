#ifndef UML_COMMANDEX_H
#define UML_COMMANDEX_H

#endif //UML_COMMANDEX_H

#include <map>

using namespace std;

class Commandex {

private:
    map<string, Commandex*> cmdInscrites;

    Commandex* constructeurVirtuel();

public:
    static Commandex* nouvelleCmd(string s);
    void execute();


};