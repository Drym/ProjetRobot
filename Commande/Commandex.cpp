#include "Commandex.h"

map<string, Commandex*>& Commandex::cmdInscrites(){
    static map<string, Commandex*>* commandesInscrites = new map<string, Commandex*>();
    return *commandesInscrites;
}

Commandex* Commandex::nouvelleCmd(string s) {
    return cmdInscrites()[s]->constructeurVirtuel();
}