#=======================================================================
# Basic C++: Vectors and matrices as used in linear algebra
#-----------------------------------------------------------------------
# Jean-Paul Rigault --- Copyright 2004
#=======================================================================

include default.mk

#-------------------------------------------------

ALL = tst_MainRobot

# targets

tst_MainRobot : MainRobot.o Robot/Robot.o Etat/EtatRobot.o Etat/RobotEnRoute.o Etat/RobotAVide.o Etat/RobotAVideFacePlot.o Etat/RobotEnCharge.o Etat/RobotEnChargeFacePlot.o Affichage/Observateur.o Affichage/Sujet.o Affichage/Afficheur.o Commande/CmdAvancer.o Commande/CmdRencontrerPlot.o Commande/CmdSaisir.o Commande/Commandex.o Commande/Invocateur.o Commande/CmdTourner.o Commande/CommandeRobot.o Commande/CmdDesexecuter.o
	$(CXX_LINK) -o tst_MainRobot *.o


extra_all :
extra_clean :


#-----------------------------------------------------------------------
# Local dependencies
#-----------------------------------------------------------------------

Robot.o : Robot/Objet.h Robot/Plot.h Robot/Position.h




