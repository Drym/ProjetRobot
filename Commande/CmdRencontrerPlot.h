#ifndef UML_CMDRENCONTRERPLOT_H
#define UML_CMDRENCONTRERPLOT_H

#include "Commandex.h"
#include "Robot/Plot.h"

class CmdRencontrerPlot : public Commandex {

private:
    Plot* p;
    static CmdRencontrerPlot instance;

protected:
    Commandex* constructeurVirtuel(Invocateur*);

public:
    CmdRencontrerPlot() : Commandex("rencontrerplot"){}
    void execute(Robot* robot);

};

#endif //UML_CMDRENCONTRERPLOT_H