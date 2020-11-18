#include "ExchangeStartedWithPodsMessage.h"
#include "ExchangeStartedMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ExchangeStartedWithPodsMessage::deserialize(CustomDataInput *input) {
    ExchangeStartedMessage::deserialize(input);
    this->_firstCharacterIdFunc(input);
    this->_firstCharacterCurrentWeightFunc(input);
    this->_firstCharacterMaxWeightFunc(input);
    this->_secondCharacterIdFunc(input);
    this->_secondCharacterCurrentWeightFunc(input);
    this->_secondCharacterMaxWeightFunc(input);
}

void ExchangeStartedWithPodsMessage::_firstCharacterIdFunc(CustomDataInput *input) {
    this->firstCharacterId = input->readDouble();
    if (this->firstCharacterId < -9007199254740990 || this->firstCharacterId > 9007199254740990) {

    }
}

void ExchangeStartedWithPodsMessage::_firstCharacterCurrentWeightFunc(CustomDataInput *input) {
    this->firstCharacterCurrentWeight = input->readVarUhInt();
    if (this->firstCharacterCurrentWeight < 0) {

    }
}

void ExchangeStartedWithPodsMessage::_firstCharacterMaxWeightFunc(CustomDataInput *input) {
    this->firstCharacterMaxWeight = input->readVarUhInt();
    if (this->firstCharacterMaxWeight < 0) {

    }
}

void ExchangeStartedWithPodsMessage::_secondCharacterIdFunc(CustomDataInput *input) {
    this->secondCharacterId = input->readDouble();
    if (this->secondCharacterId < -9007199254740990 || this->secondCharacterId > 9007199254740990) {

    }
}

void ExchangeStartedWithPodsMessage::_secondCharacterCurrentWeightFunc(CustomDataInput *input) {
    this->secondCharacterCurrentWeight = input->readVarUhInt();
    if (this->secondCharacterCurrentWeight < 0) {

    }
}

void ExchangeStartedWithPodsMessage::_secondCharacterMaxWeightFunc(CustomDataInput *input) {
    this->secondCharacterMaxWeight = input->readVarUhInt();
    if (this->secondCharacterMaxWeight < 0) {

    }
}
