#include "MainRobot.h"
#include "Robot.h"
#include "Plot.h"


using namespace std;

int main() {

    Plot plot(10);
    Objet objet(5);
    Robot robot("nord", plot, objet);

    robot.saisir(objet);

}
