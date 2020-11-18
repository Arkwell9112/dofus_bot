#include "CharacterCreationRequestMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void CharacterCreationRequestMessage::deserialize(CustomDataInput *input) {
    this->_nameFunc(input);
    this->_breedFunc(input);
    this->_sexFunc(input);
    for (unsigned int _i4 = 0; _i4 < 5; _i4++) {
        this->colors[_i4] = input->readInt();
    }
    this->_cosmeticIdFunc(input);
}

void CharacterCreationRequestMessage::_nameFunc(CustomDataInput *input) {
    this->name = input->readUTF();
}

void CharacterCreationRequestMessage::_breedFunc(CustomDataInput *input) {
    this->breed = input->readByte();
}

void CharacterCreationRequestMessage::_sexFunc(CustomDataInput *input) {
    this->sex = input->readBoolean();
}

void CharacterCreationRequestMessage::_cosmeticIdFunc(CustomDataInput *input) {
    this->cosmeticId = input->readVarUhShort();
    if (this->cosmeticId < 0) {

    }
}
