#ifndef PROJETROBOT_CMDPOSER_H
#define PROJETROBOT_CMDPOSER_H


#include "CommandeRobot.h"
#include "Robot/Objet.h"

class CmdPoser : public CommandeRobot {

private:
    Objet* o;
    static CmdPoser instance;

protected:
    Commandex* constructeurVirtuel(Invocateur*);

public:
    CmdPoser() : CommandeRobot("poser"){}
    void execute();
    void desexecute();

};


#endif //PROJETROBOT_CMDPOSER_H
