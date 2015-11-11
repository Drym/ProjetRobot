//
// Created by user on 11/11/15.
//

#ifndef PROJETROBOT_AFFICHEUR_H
#define PROJETROBOT_AFFICHEUR_H

#include <iostream>
#include "Robot.h"

class Afficheur : public Observateur {
private:
    Robot sujet;
public:
    virtual void mettreAJour();
};

#endif //PROJETROBOT_AFFICHEUR_H
