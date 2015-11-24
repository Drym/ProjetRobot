#include "Invocateur.h"
#include <string>

bool Invocateur::lireCommande() {

    cout << "Entrez votre commande" << endl;
    getline(cin, &s);

    if(s.compare("quit") == 0)
        return false;

    cmd = Commandex::nouvelleCmd(s, this);
    cmd->execute();

    return true;
}

int Invocateur::getInt(){
    getline(cin, &s);
    return stoi(s);
}

string Invocateur::getString(){
    return s;
}

Robot* Invocateur::getRobot(){
    return robot;
}