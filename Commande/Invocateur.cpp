#include "Invocateur.h"
#include "Commandex.h"
#include <string>

using namespace std;

bool Invocateur::lireCommande() {
    string s;

    cout << "Entrez votre commande" << endl;
    getline(cin, s);

    if(s.compare("quit") == 0)
        return false;

    Commandex* cmd = Commandex::nouvelleCmd(s, this);
    cmd->execute();


    return true;
}

int Invocateur::getInt(){
    string s;

    getline(cin, s);
    return stoi(s);
}

string Invocateur::getString(){
    string s;

    getline(cin, s);
    return s;
}

Robot* Invocateur::getRobot(){
    return robot;
}