#include "HouseInformationsForSell.h"
#include "HouseInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void HouseInformationsForSell::deserialize(CustomDataInput *input) {
    int _val12 = 0;
    this->_instanceIdFunc(input);
    this->_secondHandFunc(input);
    this->_modelIdFunc(input);
    this->_ownerAccountIdFunc(input);
    this->_ownerNameFunc(input);
    this->_ownerCharacterNameFunc(input);
    this->_worldXFunc(input);
    this->_worldYFunc(input);
    this->_subAreaIdFunc(input);
    this->_nbRoomFunc(input);
    this->_nbChestFunc(input);
    unsigned int _skillListIdsLen = input->readUnsignedShort();
    for (unsigned int _i12 = 0; _i12 < _skillListIdsLen; _i12++) {
        _val12 = input->readInt();
        this->skillListIds.push_back(_val12);
    }
    this->_isLockedFunc(input);
    this->_priceFunc(input);
}

void HouseInformationsForSell::_instanceIdFunc(CustomDataInput *input) {
    this->instanceId = input->readInt();
    if (this->instanceId < 0) {

    }
}

void HouseInformationsForSell::_secondHandFunc(CustomDataInput *input) {
    this->secondHand = input->readBoolean();
}

void HouseInformationsForSell::_modelIdFunc(CustomDataInput *input) {
    this->modelId = input->readVarUhInt();
    if (this->modelId < 0) {

    }
}

void HouseInformationsForSell::_ownerAccountIdFunc(CustomDataInput *input) {
    this->ownerAccountId = input->readInt();
    if (this->ownerAccountId < 0) {

    }
}

void HouseInformationsForSell::_ownerNameFunc(CustomDataInput *input) {
    this->ownerName = input->readUTF();
}

void HouseInformationsForSell::_ownerCharacterNameFunc(CustomDataInput *input) {
    this->ownerCharacterName = input->readUTF();
}

void HouseInformationsForSell::_worldXFunc(CustomDataInput *input) {
    this->worldX = input->readShort();
    if (this->worldX < -255 || this->worldX > 255) {

    }
}

void HouseInformationsForSell::_worldYFunc(CustomDataInput *input) {
    this->worldY = input->readShort();
    if (this->worldY < -255 || this->worldY > 255) {

    }
}

void HouseInformationsForSell::_subAreaIdFunc(CustomDataInput *input) {
    this->subAreaId = input->readVarUhShort();
    if (this->subAreaId < 0) {

    }
}

void HouseInformationsForSell::_nbRoomFunc(CustomDataInput *input) {
    this->nbRoom = input->readByte();
}

void HouseInformationsForSell::_nbChestFunc(CustomDataInput *input) {
    this->nbChest = input->readByte();
}

void HouseInformationsForSell::_skillListIdsFunc(CustomDataInput *input) {
    int _val = input->readInt();
    this->skillListIds.push_back(_val);
}

void HouseInformationsForSell::_isLockedFunc(CustomDataInput *input) {
    this->isLocked = input->readBoolean();
}

void HouseInformationsForSell::_priceFunc(CustomDataInput *input) {
    this->price = input->readVarUhLong();
    if (this->price < 0 || this->price > 9007199254740990) {

    }
}
