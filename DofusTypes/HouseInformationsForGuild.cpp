#include "HouseInformationsForGuild.h"
#include "HouseInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void HouseInformationsForGuild::deserialize(CustomDataInput *input) {
    int _val8 = 0;
    HouseInformations::deserialize(input);
    this->_instanceIdFunc(input);
    this->_secondHandFunc(input);
    this->_ownerNameFunc(input);
    this->_worldXFunc(input);
    this->_worldYFunc(input);
    this->_mapIdFunc(input);
    this->_subAreaIdFunc(input);
    unsigned int _skillListIdsLen = input->readUnsignedShort();
    for (unsigned int _i8 = 0; _i8 < _skillListIdsLen; _i8++) {
        _val8 = input->readInt();
        this->skillListIds.push_back(_val8);
    }
    this->_guildshareParamsFunc(input);
}

void HouseInformationsForGuild::_instanceIdFunc(CustomDataInput *input) {
    this->instanceId = input->readInt();
    if (this->instanceId < 0) {

    }
}

void HouseInformationsForGuild::_secondHandFunc(CustomDataInput *input) {
    this->secondHand = input->readBoolean();
}

void HouseInformationsForGuild::_ownerNameFunc(CustomDataInput *input) {
    this->ownerName = input->readUTF();
}

void HouseInformationsForGuild::_worldXFunc(CustomDataInput *input) {
    this->worldX = input->readShort();
    if (this->worldX < -255 || this->worldX > 255) {

    }
}

void HouseInformationsForGuild::_worldYFunc(CustomDataInput *input) {
    this->worldY = input->readShort();
    if (this->worldY < -255 || this->worldY > 255) {

    }
}

void HouseInformationsForGuild::_mapIdFunc(CustomDataInput *input) {
    this->mapId = input->readDouble();
    if (this->mapId < 0 || this->mapId > 9007199254740990) {

    }
}

void HouseInformationsForGuild::_subAreaIdFunc(CustomDataInput *input) {
    this->subAreaId = input->readVarUhShort();
    if (this->subAreaId < 0) {

    }
}

void HouseInformationsForGuild::_skillListIdsFunc(CustomDataInput *input) {
    int _val = input->readInt();
    this->skillListIds.push_back(_val);
}

void HouseInformationsForGuild::_guildshareParamsFunc(CustomDataInput *input) {
    this->guildshareParams = input->readVarUhInt();
    if (this->guildshareParams < 0) {

    }
}
