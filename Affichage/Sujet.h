//
// Created by user on 11/11/15.
//

#ifndef PROJETROBOT_SUJET_H
#define PROJETROBOT_SUJET_H

#include <iostream>
#include <vector>
#include "Observateur.h"

class Sujet{
protected:
    std::vector<class Observateur*> observateurs;
public:
    virtual void attacherObservateur(Observateur *obs);
    virtual void detacherObservateur(Observateur *obs);
    virtual void notifier();
};

#endif //PROJETROBOT_SUJET_H
