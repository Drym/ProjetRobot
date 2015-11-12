//
// Created by user on 11/11/15.
//

#include "Afficheur.h"

void Afficheur::mettreAJour() {
    string dir = sujet->getDirection();
    string ordre = sujet->getDernierOrdre();
    Position pos = sujet->getPosition();

    cout << "-----------------------------------------------" << endl;
    cout << "Ordre : " << ordre << endl;
    cout << "Direction : " << dir << endl;
    cout << "Position : (" << pos.getX() << ", " << pos.getY() << ")" << endl;
    cout << "-----------------------------------------------" << endl;
}