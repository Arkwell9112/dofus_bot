#include "CharactersListWithRemodelingMessage.h"
#include "CharactersListMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/CharacterToRemodelInformations.h"

void CharactersListWithRemodelingMessage::deserialize(CustomDataInput *input) {
    CharacterToRemodelInformations _item1;
    CharactersListMessage::deserialize(input);
    unsigned int _charactersToRemodelLen = input->readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _charactersToRemodelLen; _i1++) {
        _item1.deserialize(input);
        this->charactersToRemodel.push_back(_item1);
    }
}