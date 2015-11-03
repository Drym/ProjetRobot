#ifndef PROJETROBOT_ROBOT_H
#define PROJETROBOT_ROBOT_H


class Robot {
private:
    string direction;
    Plot plot;
    Objet objet;

public:
    void rencontrerPlot(Plot p);
    void saisir(Objet o);
};


#endif //PROJETROBOT_ROBOT_H
