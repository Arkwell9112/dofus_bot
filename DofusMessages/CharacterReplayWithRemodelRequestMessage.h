#ifndef CHARACTERREPLAYWITHREMODELREQUESTMESSAGE_H
#define CHARACTERREPLAYWITHREMODELREQUESTMESSAGE_H

#include "CharacterReplayRequestMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/RemodelingInformation.h"

#include <string>
#include <vector>

class CharacterReplayWithRemodelRequestMessage : public CharacterReplayRequestMessage {
public:
    RemodelingInformation remodel;

    void deserialize(CustomDataInput *input);

private:
};

#endif