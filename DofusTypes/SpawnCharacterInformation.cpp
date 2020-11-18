#include "SpawnInformation.h"
#include "SpawnCharacterInformation.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void SpawnCharacterInformation::deserialize(CustomDataInput *input) {
    SpawnInformation::deserialize(input);
    this->_nameFunc(input);
    this->_levelFunc(input);
}

void SpawnCharacterInformation::_nameFunc(CustomDataInput *input) {
    this->name = input->readUTF();
}

void SpawnCharacterInformation::_levelFunc(CustomDataInput *input) {
    this->level = input->readVarUhShort();
    if (this->level < 1 || this->level > 200) {

    }
}
