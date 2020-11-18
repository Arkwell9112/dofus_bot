#ifndef BREACHKICKRESPONSEMESSAGE_H
#define BREACHKICKRESPONSEMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/CharacterMinimalInformations.h"

#include <string>
#include <vector>

class BreachKickResponseMessage : public DeserializeInterface {
public:
    CharacterMinimalInformations target;
    bool kicked = false;

    void deserialize(CustomDataInput *input);

private:
    void _kickedFunc(CustomDataInput *input);
};

#endif