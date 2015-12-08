#ifndef PROJETROBOT_DESEXECUTER_H
#define PROJETROBOT_DESEXECUTER_H

#include "CommandeRobot.h"

class CmdDesexecuter : public CommandeRobot {

private:
    static CmdDesexecuter instance;

protected:
    Commandex* constructeurVirtuel(Invocateur*);

public:
    CmdDesexecuter() : CommandeRobot("undo"){}
    void execute();
    void desexecute();

};

#endif //PROJETROBOT_DESEXECUTER_H
