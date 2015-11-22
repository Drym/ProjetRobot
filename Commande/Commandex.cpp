#include "Commandex.h"

static Commandex* Commandex::nouvelleCmd(string s) {
    return cmdInscrites()[s]->constructeurVirtuel();
}

virtual Commandex* Commandex::constructeurVirtuel() = 0;