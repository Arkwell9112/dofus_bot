#include "MapComplementaryInformationsDataMessage.h"
#include "MapComplementaryInformationsBreachMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/BreachBranch.h"

void MapComplementaryInformationsBreachMessage::deserialize(CustomDataInput *input) {
    unsigned int _id4 = 0;
    BreachBranch _item4;
    MapComplementaryInformationsDataMessage::deserialize(input);
    this->_floorFunc(input);
    this->_roomFunc(input);
    this->_infinityModeFunc(input);
    unsigned int _branchesLen = input->readUnsignedShort();
    for (unsigned int _i4 = 0; _i4 < _branchesLen; _i4++) {
        _id4 = input->readUnsignedShort();
        _item4 = *dynamic_cast<BreachBranch *>(ProtocolTypeManager::getInstance(_id4, input));
        ProtocolTypeManager::deleteLastInstance();

        this->branches.push_back(_item4);
    }
}

void MapComplementaryInformationsBreachMessage::_floorFunc(CustomDataInput *input) {
    this->floor = input->readVarUhInt();
    if (this->floor < 0) {

    }
}

void MapComplementaryInformationsBreachMessage::_roomFunc(CustomDataInput *input) {
    this->room = input->readByte();
    if (this->room < 0) {

    }
}

void MapComplementaryInformationsBreachMessage::_infinityModeFunc(CustomDataInput *input) {
    this->infinityMode = input->readShort();
    if (this->infinityMode < 0) {

    }
}

void MapComplementaryInformationsBreachMessage::_branchesFunc(CustomDataInput *input) {
    unsigned int _id = input->readUnsignedShort();
    BreachBranch _item;
    _item.deserialize(input);
    this->branches.push_back(_item);
}
