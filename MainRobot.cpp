#include "Robot.h"
#include "Plot.h"
#include "Etat/EtatRobot.h"


using namespace std;

int main() {

    Plot plot(10);
    Objet objet(5);
    Robot robot("nord", plot, objet);

    cout << "Erreur OK : ";
    robot.saisir(objet);
    cout << "Pas d'erreur ensuite !!!" << endl;
    robot.rencontrerPlot(plot);
    robot.saisir(objet);
}
