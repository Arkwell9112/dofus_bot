#ifndef BASICCHARACTERSLISTMESSAGE_H
#define BASICCHARACTERSLISTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/CharacterBaseInformations.h"

#include <string>
#include <vector>

class BasicCharactersListMessage : public DeserializeInterface {
public:
    std::vector<CharacterBaseInformations> characters;

    void deserialize(CustomDataInput *input);

private:
    void _charactersFunc(CustomDataInput *input);
};

#endif