#ifndef PROJETROBOT_ETATROBOT_H
#define PROJETROBOT_ETATROBOT_H

#include <iostream>

class EtatRobot {

public:
    EtatRobot() = default;
    virtual ~EtatRobot() = default;
    virtual EtatRobot* rencontrerPlot() const;
    virtual EtatRobot* saisir() const;
    virtual EtatRobot* poser() const;
    virtual EtatRobot* avancer() const;
    virtual EtatRobot* tourner() const;

    class NoActionDefinedException{
    private:
        std::string action;
    public:
        NoActionDefinedException(std::string act):action(act){};
        void getMessageError(){
            std::cout << "Action \"" << action << "\" impossible à réaliser dans l'état actuel." << std::endl;
        }
    };
};


#endif //PROJETROBOT_ETATROBOT_H
