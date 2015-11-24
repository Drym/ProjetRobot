#ifndef UML_INVOCATEUR_H
#define UML_INVOCATEUR_H

#include "Commandex.h"

class Invocateur {

public:
    Commandex* cmd;

    void lireCommande();
};

#endif //UML_INVOCATEUR_H