#ifndef UML_INVOCATEUR_H
#define UML_INVOCATEUR_H

#include "Robot/Robot.h"

class Invocateur {
private:
    Robot* robot;
public:
    Invocateur(Robot* r) : robot(r) {}

    bool lireCommande();
    int getInt();
    string getString();
    Robot* getRobot();
};

#endif //UML_INVOCATEUR_H