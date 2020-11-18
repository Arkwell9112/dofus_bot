#ifndef INTERACTIVEUSEWITHPARAMREQUESTMESSAGE_H
#define INTERACTIVEUSEWITHPARAMREQUESTMESSAGE_H

#include "InteractiveUseRequestMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class InteractiveUseWithParamRequestMessage : public InteractiveUseRequestMessage {
public:
    int id = 0;

    void deserialize(CustomDataInput *input);

private:
    void _idFunc(CustomDataInput *input);
};

#endif