#include "TreasureHuntMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/TreasureHuntStep.h"

#include "../DofusTypes/TreasureHuntFlag.h"

void TreasureHuntMessage::deserialize(CustomDataInput *input) {
    unsigned int _id3 = 0;
    TreasureHuntStep _item3;
    TreasureHuntFlag _item8;
    this->_questTypeFunc(input);
    this->_startMapIdFunc(input);
    unsigned int _knownStepsListLen = input->readUnsignedShort();
    for (unsigned int _i3 = 0; _i3 < _knownStepsListLen; _i3++) {
        _id3 = input->readUnsignedShort();
        _item3 = *dynamic_cast<TreasureHuntStep *>(ProtocolTypeManager::getInstance(_id3, input));
        ProtocolTypeManager::deleteLastInstance();

        this->knownStepsList.push_back(_item3);
    }
    this->_totalStepCountFunc(input);
    this->_checkPointCurrentFunc(input);
    this->_checkPointTotalFunc(input);
    this->_availableRetryCountFunc(input);
    unsigned int _flagsLen = input->readUnsignedShort();
    for (unsigned int _i8 = 0; _i8 < _flagsLen; _i8++) {
        _item8.deserialize(input);
        this->flags.push_back(_item8);
    }
}

void TreasureHuntMessage::_questTypeFunc(CustomDataInput *input) {
    this->questType = input->readByte();
    if (this->questType < 0) {

    }
}

void TreasureHuntMessage::_startMapIdFunc(CustomDataInput *input) {
    this->startMapId = input->readDouble();
    if (this->startMapId < 0 || this->startMapId > 9007199254740990) {

    }
}

void TreasureHuntMessage::_knownStepsListFunc(CustomDataInput *input) {
    unsigned int _id = input->readUnsignedShort();
    TreasureHuntStep _item;
    _item.deserialize(input);
    this->knownStepsList.push_back(_item);
}

void TreasureHuntMessage::_totalStepCountFunc(CustomDataInput *input) {
    this->totalStepCount = input->readByte();
    if (this->totalStepCount < 0) {

    }
}

void TreasureHuntMessage::_checkPointCurrentFunc(CustomDataInput *input) {
    this->checkPointCurrent = input->readVarUhInt();
    if (this->checkPointCurrent < 0) {

    }
}

void TreasureHuntMessage::_checkPointTotalFunc(CustomDataInput *input) {
    this->checkPointTotal = input->readVarUhInt();
    if (this->checkPointTotal < 0) {

    }
}

void TreasureHuntMessage::_availableRetryCountFunc(CustomDataInput *input) {
    this->availableRetryCount = input->readInt();
}
