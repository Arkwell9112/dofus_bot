#include "EntitiesInformationMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/EntityInformation.h"

void EntitiesInformationMessage::deserialize(CustomDataInput *input) {
    EntityInformation _item1;
    unsigned int _entitiesLen = input->readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _entitiesLen; _i1++) {
        _item1.deserialize(input);
        this->entities.push_back(_item1);
    }
}