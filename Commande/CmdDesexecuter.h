#ifndef PROJETROBOT_DESEXECUTER_H
#define PROJETROBOT_DESEXECUTER_H

#include "Commandex.h"

class CmdDesexecuter : public Commandex {

private:
    static CmdDesexecuter instance;

protected:
    Commandex* constructeurVirtuel(Invocateur*);

public:
    CmdDesexecuter() : Commandex("undo"){}
    void setRobot(Robot* robot){}
    void execute();
    void desexecute();

};

#endif //PROJETROBOT_DESEXECUTER_H
