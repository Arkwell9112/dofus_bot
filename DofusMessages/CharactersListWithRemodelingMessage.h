#ifndef CHARACTERSLISTWITHREMODELINGMESSAGE_H
#define CHARACTERSLISTWITHREMODELINGMESSAGE_H

#include "CharactersListMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/CharacterToRemodelInformations.h"

#include <string>
#include <vector>

class CharactersListWithRemodelingMessage : public CharactersListMessage {
public:
    std::vector<CharacterToRemodelInformations> charactersToRemodel;

    void deserialize(CustomDataInput *input);

private:
};

#endif