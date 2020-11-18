#ifndef BREACHINVITATIonAnsWERMESSAGE_H
#define BREACHINVITATIonAnsWERMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class BreachInvitationAnswerMessage : public DeserializeInterface {
public:
    bool accept = false;

    void deserialize(CustomDataInput *input);

private:
    void _acceptFunc(CustomDataInput *input);
};

#endif