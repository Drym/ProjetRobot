#include "Invocateur.h"
#include <string>

void Invocateur::inscrireCommandes() {

    string s;

    //TODO lire en entrée
    while (s = "Je sais pas quoi faire ici pour lire en entrée, c'est la merde !") {
        cmd = Commandex::nouvelleCmd(s);
        cmd.execute();
    }

}