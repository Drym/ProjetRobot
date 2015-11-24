#include "Invocateur.h"
#include <string>

void Invocateur::lireCommande() {

    string s;

    cout << "Entrez votre commande" << endl;
    cin >> s; //getstring

    cmd = Commandex::nouvelleCmd(s);
    cmd->execute();
}