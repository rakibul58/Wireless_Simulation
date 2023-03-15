#include <omnetpp.h>
using namespace omnetpp;

class server: public cSimpleModule {
    cMessage *msg;
    virtual void initialize();
    virtual void handleMessage(cMessage *msg);
};

Define_Module(server);

void server::initialize() {

}

void server::handleMessage(cMessage *msg) {
    msg = new cMessage("Server to Client");
    cModule *target = getParentModule()->getSubmodule("Client");
    sendDirect(msg, target, "radioIn");

}
