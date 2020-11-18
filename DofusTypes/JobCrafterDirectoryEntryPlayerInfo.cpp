#include "PlayerStatus.h"
#include "JobCrafterDirectoryEntryPlayerInfo.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void JobCrafterDirectoryEntryPlayerInfo::deserialize(CustomDataInput *input) {
    this->_playerIdFunc(input);
    this->_playerNameFunc(input);
    this->_alignmentSideFunc(input);
    this->_breedFunc(input);
    this->_sexFunc(input);
    this->_isInWorkshopFunc(input);
    this->_worldXFunc(input);
    this->_worldYFunc(input);
    this->_mapIdFunc(input);
    this->_subAreaIdFunc(input);
    this->_canCraftLegendaryFunc(input);
    unsigned int _id12 = input->readUnsignedShort();
    this->status = *dynamic_cast<PlayerStatus *>(ProtocolTypeManager::getInstance(_id12, input));
    ProtocolTypeManager::deleteLastInstance();

}

void JobCrafterDirectoryEntryPlayerInfo::_playerIdFunc(CustomDataInput *input) {
    this->playerId = input->readVarUhLong();
    if (this->playerId < 0 || this->playerId > 9007199254740990) {

    }
}

void JobCrafterDirectoryEntryPlayerInfo::_playerNameFunc(CustomDataInput *input) {
    this->playerName = input->readUTF();
}

void JobCrafterDirectoryEntryPlayerInfo::_alignmentSideFunc(CustomDataInput *input) {
    this->alignmentSide = input->readByte();
}

void JobCrafterDirectoryEntryPlayerInfo::_breedFunc(CustomDataInput *input) {
    this->breed = input->readByte();
}

void JobCrafterDirectoryEntryPlayerInfo::_sexFunc(CustomDataInput *input) {
    this->sex = input->readBoolean();
}

void JobCrafterDirectoryEntryPlayerInfo::_isInWorkshopFunc(CustomDataInput *input) {
    this->isInWorkshop = input->readBoolean();
}

void JobCrafterDirectoryEntryPlayerInfo::_worldXFunc(CustomDataInput *input) {
    this->worldX = input->readShort();
    if (this->worldX < -255 || this->worldX > 255) {

    }
}

void JobCrafterDirectoryEntryPlayerInfo::_worldYFunc(CustomDataInput *input) {
    this->worldY = input->readShort();
    if (this->worldY < -255 || this->worldY > 255) {

    }
}

void JobCrafterDirectoryEntryPlayerInfo::_mapIdFunc(CustomDataInput *input) {
    this->mapId = input->readDouble();
    if (this->mapId < 0 || this->mapId > 9007199254740990) {

    }
}

void JobCrafterDirectoryEntryPlayerInfo::_subAreaIdFunc(CustomDataInput *input) {
    this->subAreaId = input->readVarUhShort();
    if (this->subAreaId < 0) {

    }
}

void JobCrafterDirectoryEntryPlayerInfo::_canCraftLegendaryFunc(CustomDataInput *input) {
    this->canCraftLegendary = input->readBoolean();
}
