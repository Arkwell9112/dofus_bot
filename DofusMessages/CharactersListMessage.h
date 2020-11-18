#ifndef CHARACTERSLISTMESSAGE_H
#define CHARACTERSLISTMESSAGE_H

#include "BasicCharactersListMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class CharactersListMessage : public BasicCharactersListMessage {
public:
    bool hasStartupActions = false;

    void deserialize(CustomDataInput *input);

private:
    void _hasStartupActionsFunc(CustomDataInput *input);
};

#endif