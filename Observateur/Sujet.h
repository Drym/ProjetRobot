//
// Created by user on 11/11/15.
//

#ifndef PROJETROBOT_SUJET_H
#define PROJETROBOT_SUJET_H

#include <iostream>
#include "Observateur.h"

class Sujet{
public:
    virtual void attacherObservateur(Observateur *obs) = 0;
    virtual void detacherObservateur(Observateur *obs) = 0;
    virtual void notifier() = 0;
};

#endif //PROJETROBOT_SUJET_H
