#ifndef SETCHARACTERRESTRICTIONSMESSAGE_H
#define SETCHARACTERRESTRICTIONSMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/ActorRestrictionsInformations.h"

#include <string>
#include <vector>

class SetCharacterRestrictionsMessage : public DeserializeInterface {
public:
    double actorId = 0;
    ActorRestrictionsInformations restrictions;

    void deserialize(CustomDataInput *input);

private:
    void _actorIdFunc(CustomDataInput *input);
};

#endif