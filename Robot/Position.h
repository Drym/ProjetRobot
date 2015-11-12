//
// Created by user on 12/11/15.
//

#ifndef PROJETROBOT_POSITION_H
#define PROJETROBOT_POSITION_H

class Position {
private:
    int _x;
    int _y;
public:
    Position(int x = 0, int y = 0) : _x(x), _y(y){};
    void setX(int x){ _x = x; };
    void setY(int y){ _y = y; };
    int getX(){ return _x;};
    int getY(){ return _y;};
};

#endif //PROJETROBOT_POSITION_H
