#ifndef PROJETROBOT_ROBOT_H
#define PROJETROBOT_ROBOT_H

#include "Plot.h"
#include "Objet.h"
#include <string>
#include <vector>
#include "Etat/EtatRobot.h"
#include "Etat/RobotAVide.h"
#include "Sujet.h"

using namespace std;


class Robot : public Sujet{
private:
    vector<Observateur*> observateurs;
    string direction;
    Plot plot;
    Objet objet;
    EtatRobot* etatRobot;

public:
    //Constructeur
    Robot(string direction, Plot plot, Objet objet): direction(direction), plot(plot), objet(objet){
        etatRobot = RobotAVide::getInstance();
    };

    void rencontrerPlot(Plot p);
    void saisir(Objet o);

    virtual void attacherObservateur(Observateur *obs);
    virtual void detacherObservateur(Observateur *obs);
    virtual void notifier();
};


#endif //PROJETROBOT_ROBOT_H
