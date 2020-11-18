#include "HavenBagFurnituresMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/HavenBagFurnitureInformation.h"

void HavenBagFurnituresMessage::deserialize(CustomDataInput *input) {
    HavenBagFurnitureInformation _item1;
    unsigned int _furnituresInfosLen = input->readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _furnituresInfosLen; _i1++) {
        _item1.deserialize(input);
        this->furnituresInfos.push_back(_item1);
    }
}