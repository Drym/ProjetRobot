include default.mk

#-------------------------------------------------

ALL = tst_MainRobot

# targets

tst_MainRobot : MainRobot.o Robot/Robot.o Etat/EtatRobot.o Etat/RobotEnRoute.o Etat/RobotAVide.o Etat/RobotAVideFacePlot.o Etat/RobotEnCharge.o Etat/RobotEnChargeFacePlot.o Affichage/Observateur.o Affichage/Sujet.o Affichage/Afficheur.o  Commande/Commandex.o Commande/CommandeRobot.o Commande/Invocateur.o
	$(CXX_LINK) -o tst_MainRobot *.o

extra_all :
extra_clean :


#-----------------------------------------------------------------------
# Local dependencies
#-----------------------------------------------------------------------

CommandeRobot.o : Commande/CmdSaisir.h Commande/CmdAvancer.h Commande/CmdRencontrerPlot.h Commande/CmdTourner.h Commande/CmdDesexecuter.h
Robot.o : Robot/Objet.h Robot/Plot.h Robot/Position.h