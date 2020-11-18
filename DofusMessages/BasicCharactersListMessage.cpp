#include "CharactersListMessage.h"
#include "BasicCharactersListMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/CharacterBaseInformations.h"

void BasicCharactersListMessage::deserialize(CustomDataInput *input) {
    unsigned int _id1 = 0;
    CharacterBaseInformations _item1;
    unsigned int _charactersLen = input->readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _charactersLen; _i1++) {
        _id1 = input->readUnsignedShort();
        _item1 = *dynamic_cast<CharacterBaseInformations *>(ProtocolTypeManager::getInstance(_id1, input));
        ProtocolTypeManager::deleteLastInstance();

        this->characters.push_back(_item1);
    }
}

void BasicCharactersListMessage::_charactersFunc(CustomDataInput *input) {
    unsigned int _id = input->readUnsignedShort();
    CharacterBaseInformations _item;
    _item.deserialize(input);
    this->characters.push_back(_item);
}
