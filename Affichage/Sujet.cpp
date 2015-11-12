//
// Created by user on 11/11/15.
//

#include "Sujet.h"

using namespace std;

void Sujet::attacherObservateur(Observateur *obs){
    observateurs.push_back(obs);
}

void Sujet::detacherObservateur(Observateur *obs){
   // observateurs.erase(remove(observateurs.begin(), observateurs.end(), obs), observateurs.end());
}

void Sujet::notifier(){
    for (unsigned int i = 0; i < observateurs.size(); ++i) {
        observateurs[i]->mettreAJour();
    }
}