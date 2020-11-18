#include "FriendSpouseOnlineInformations.h"
#include "FriendSpouseInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void FriendSpouseOnlineInformations::deserialize(CustomDataInput *input) {
    FriendSpouseInformations::deserialize(input);
    this->deserializeByteBoxes(input);
    this->_mapIdFunc(input);
    this->_subAreaIdFunc(input);
}

void FriendSpouseOnlineInformations::deserializeByteBoxes(CustomDataInput *input) {
    unsigned int _box0 = input->readUnsignedByte();
    this->inFight = BooleanByteWrapper::getFlag(_box0, 0);
    this->followSpouse = BooleanByteWrapper::getFlag(_box0, 1);
}

void FriendSpouseOnlineInformations::_mapIdFunc(CustomDataInput *input) {
    this->mapId = input->readDouble();
    if (this->mapId < 0 || this->mapId > 9007199254740990) {

    }
}

void FriendSpouseOnlineInformations::_subAreaIdFunc(CustomDataInput *input) {
    this->subAreaId = input->readVarUhShort();
    if (this->subAreaId < 0) {

    }
}
