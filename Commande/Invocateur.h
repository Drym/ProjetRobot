#ifndef UML_INVOCATEUR_H
#define UML_INVOCATEUR_H

#include "Commandex.h"

class Invocateur {
private:
    Robot* robot;
    string s;
public:
    Invocateur(Robot* r) : robot(r) {}
    Commandex* cmd;

    bool lireCommande();
    int getInt();
    string getString();
    Robot* getRobot();
};

#endif //UML_INVOCATEUR_H