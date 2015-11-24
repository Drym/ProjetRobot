#ifndef UML_CMDRENCONTRERPLOT_H
#define UML_CMDRENCONTRERPLOT_H

#include "Commandex.h"
#include "Robot/Plot.h"

class CmdRencontrerPlot : public Commandex {

private:
    Plot* p;

protected:
    Commandex* constructeurVirtuel();

public:
    void execute();

};

#endif //UML_CMDRENCONTRERPLOT_H