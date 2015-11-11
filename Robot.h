#ifndef PROJETROBOT_ROBOT_H
#define PROJETROBOT_ROBOT_H

#include "Plot.h"
#include "Objet.h"
#include <string>
#include "Etat/EtatRobot.h"

using namespace std;


class Robot {
private:
    string direction;
    Plot plot;
    Objet objet;
    EtatRobot *etatRobot;

public:
    void rencontrerPlot(Plot p);
    void saisir(Objet o);

    //Constructeur
    Robot(string direction, Plot plot, Objet objet): direction(direction), plot(plot), objet(objet){
       /* etatRobot = new EtatRobot(); */ }; //TODO
};


#endif //PROJETROBOT_ROBOT_H
