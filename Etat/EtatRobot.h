#ifndef PROJETROBOT_ETATROBOT_H
#define PROJETROBOT_ETATROBOT_H

#include <iostream>

class EtatRobot {

public:
    EtatRobot() = default;
    virtual ~EtatRobot() = default;
    virtual EtatRobot& rencontrerPlot();
    virtual EtatRobot& saisir();

    class NoActionDefinedException{
    public:
        void getMessageError(){ std::cout << "Action impossible à réaliser dans l'état actuel.";}
    };
};


#endif //PROJETROBOT_ETATROBOT_H
