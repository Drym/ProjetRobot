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
    if(cmd == nullptr){
        cout << "Commande inconnue" << endl;
        return true;
    }

    cmd->setRobot(robot);
    cmd->execute();


    return true;
}

int Invocateur::getInt(){
    string s;
    cout << "-> Veuillez entrer un entier :" << endl;
    getline(cin, s);
    return stoi(s);
}

string Invocateur::getString(){
    string s;
    cout << "-> Veuillez entrer une chaine de caractères :" << endl;
    getline(cin, s);
    return s;
}

Robot* Invocateur::getRobot(){
    return robot;
}