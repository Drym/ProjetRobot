#ifndef PROJETROBOT_OBJET_H
#define PROJETROBOT_OBJET_H


class Objet {
private:
    int poids;

public:
    int getPoids();

    //Constructeur
    Objet(int poids): poids(poids){};

};


#endif //PROJETROBOT_OBJET_H
