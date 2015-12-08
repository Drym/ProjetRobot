#include "Commandex.h"

stack<Commandex*> Commandex::cmdStack;

map<string, Commandex*>& Commandex::cmdInscrites(){
    static map<string, Commandex*>* commandesInscrites = new map<string, Commandex*>();
    return *commandesInscrites;
}

Commandex::Commandex(string c){
    cmdInscrites()[c]=this;
}

Commandex* Commandex::nouvelleCmd(string s, Invocateur* invocateur) {
  /* map<string, Commandex*> m = cmdInscrites();

    for(map<string,Commandex*>::iterator it = m.begin(); it != m.end(); ++it) {
        cout << it->first << endl;
    }*/
    if(cmdInscrites()[s] == nullptr)
        return nullptr;
    return cmdInscrites()[s]->constructeurVirtuel(invocateur);
}