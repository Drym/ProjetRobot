#ifndef UML_CMDRENCONTRERPLOT_H
#define UML_CMDRENCONTRERPLOT_H

#include "Commandex.h"
#include "Robot/Plot.h"

class CmdRencontrerPlot : public Commandex {

private:
    Plot* p;
    Commandex* constructeurVirtuel();

public:
    virtual void execute();

};

#endif //UML_CMDRENCONTRERPLOT_H