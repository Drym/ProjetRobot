#include "CmdDesexecuter.h"

CmdDesexecuter CmdDesexecuter::instance = CmdDesexecuter();

Commandex* CmdDesexecuter::constructeurVirtuel(Invocateur* invocateur) {
    return new CmdDesexecuter();
}

void CmdDesexecuter::execute() {
    if(!cmdStack.empty()) {
        Commandex *cmd = cmdStack.top();
        cmdStack.pop();
        cmd->desexecute();
    } else {
        cout << "Plus rien à désexécuter !" << endl;
    }
}

void CmdDesexecuter::desexecute(){
}