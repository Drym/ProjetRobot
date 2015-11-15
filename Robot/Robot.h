#ifndef PROJETROBOT_ROBOT_H
#define PROJETROBOT_ROBOT_H

#include <iostream>
#include <string>
#include "Plot.h"
#include "Objet.h"
#include "Position.h"
#include "Etat/EtatRobot.h"
#include "Etat/RobotAVide.h"
#include "Affichage/Sujet.h"

using namespace std;


class Robot : public Sujet{
private:
    string direction;
    string dernierOrdre;
    Plot* plot;
    Objet* objet;
    Position position;
    EtatRobot* etatRobot;

public:
    Robot(string direction, Position position, Plot* plot = nullptr, Objet* objet = nullptr):
            direction(direction), plot(plot), objet(objet), position(position){
        etatRobot = RobotAVide::getInstance();
        dernierOrdre = "constructeur";
    };

    void rencontrerPlot(Plot* p);
    void saisir(Objet* o);
    void avancer(int x, int y);

    Position getPosition(){ return position;};
    string getDirection(){ return direction;};
    string getDernierOrdre(){ return dernierOrdre;};
};


#endif //PROJETROBOT_ROBOT_H
