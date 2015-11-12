#=======================================================================
# Basic C++: Vectors and matrices as used in linear algebra
#-----------------------------------------------------------------------
# Jean-Paul Rigault --- Copyright 2004
#=======================================================================

include default.mk

#-------------------------------------------------

INITIAL_FILES = MainRobot.cpp Robot/Robot.cpp Robot/Objet.cpp Robot/Plot.cpp Robot/Position.cpp Etat/EtatRobot.cpp Etat/RobotEnRoute.cpp Etat/RobotAVide.cpp Etat/RobotAVideFacePlot.cpp Etat/RobotEnCharge.cpp Etat/RobotEnChargeFacePlot.cpp Affichage/Observateur.cpp Affichage/Sujet.cpp Affichage/Afficheur.cpp
ALL = tst_MainRobot

# targets

tst_MainRobot : MainRobot.o Robot/Robot.o Robot/Objet.o Robot/Plot.o Robot/Position.o Etat/EtatRobot.o Etat/RobotEnRoute.o Etat/RobotAVide.o Etat/RobotAVideFacePlot.o Etat/RobotEnCharge.o Etat/RobotEnChargeFacePlot.o Affichage/Observateur.o Affichage/Sujet.o Affichage/Afficheur.o
	$(CXX_LINK) -o tst_MainRobot  MainRobot.o Robot.o Objet.o Plot.o Position.o EtatRobot.o RobotEnRoute.o RobotAVide.o RobotAVideFacePlot.o RobotEnCharge.o RobotEnChargeFacePlot.o Observateur.o Sujet.o Afficheur.o


dox : $(wildcard *.h *.cpp)
	doxygen
	date > dox

extra_all :
extra_clean :

extra_initial : $(ALL)
	tst_MainRobot > tst_MainRobot.out 2>&1
	cp tst_MainRobot.out $(INITIAL_DIR)
	chmod a+r $(INITIAL_DIR)/*.out

#-----------------------------------------------------------------------
# Local dependencies
#-----------------------------------------------------------------------

tst_MainRobot.o : tst_MainRobot.h common_defs.h



