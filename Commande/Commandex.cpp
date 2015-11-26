#include "Commandex.h"

map<string, Commandex*>& Commandex::cmdInscrites(){
    static map<string, Commandex*>* commandesInscrites = new map<string, Commandex*>();
    return *commandesInscrites;
}

Commandex::Commandex(string c){
    cmdInscrites()[c]=this;
}

Commandex* Commandex::nouvelleCmd(string s, Invocateur* invocateur) {
    return cmdInscrites()[s]->constructeurVirtuel(invocateur);
}