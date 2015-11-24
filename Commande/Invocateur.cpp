#include "Invocateur.h"
#include <string>

void Invocateur::lireCommande() {

    string s = "zosizjf";

    //TODO lire en entrée
    while (true) {
        cmd = Commandex::nouvelleCmd(s);
        cmd->execute();
    }

}