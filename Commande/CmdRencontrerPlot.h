#ifndef UML_CMDRENCONTRERPLOT_H
#define UML_CMDRENCONTRERPLOT_H

#include "CommandeRobot.h"
#include "Robot/Plot.h"

class CmdRencontrerPlot : public CommandeRobot {

private:
    Plot* p;
    static CmdRencontrerPlot instance;

protected:
    Commandex* constructeurVirtuel(Invocateur*);

public:
    CmdRencontrerPlot() : CommandeRobot("rencontrerplot"){}
    void execute();

};

#endif //UML_CMDRENCONTRERPLOT_H