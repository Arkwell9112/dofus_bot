#ifndef ARENAFIGHTERLEAVEMESSAGE_H
#define ARENAFIGHTERLEAVEMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/CharacterBasicMinimalInformations.h"

#include <string>
#include <vector>

class ArenaFighterLeaveMessage : public DeserializeInterface {
public:
    CharacterBasicMinimalInformations leaver;

    void deserialize(CustomDataInput *input);

private:
};

#endif