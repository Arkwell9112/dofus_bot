#include "AbstractGameActionMessage.h"
#include "AbstractGameActionFightTargetedAbilityMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void AbstractGameActionFightTargetedAbilityMessage::deserialize(CustomDataInput *input) {
    AbstractGameActionMessage::deserialize(input);
    this->deserializeByteBoxes(input);
    this->_targetIdFunc(input);
    this->_destinationCellIdFunc(input);
    this->_criticalFunc(input);
}

void AbstractGameActionFightTargetedAbilityMessage::deserializeByteBoxes(CustomDataInput *input) {
    unsigned int _box0 = input->readUnsignedByte();
    this->silentCast = BooleanByteWrapper::getFlag(_box0, 0);
    this->verboseCast = BooleanByteWrapper::getFlag(_box0, 1);
}

void AbstractGameActionFightTargetedAbilityMessage::_targetIdFunc(CustomDataInput *input) {
    this->targetId = input->readDouble();
    if (this->targetId < -9007199254740990 || this->targetId > 9007199254740990) {

    }
}

void AbstractGameActionFightTargetedAbilityMessage::_destinationCellIdFunc(CustomDataInput *input) {
    this->destinationCellId = input->readShort();
    if (this->destinationCellId < -1 || this->destinationCellId > 559) {

    }
}

void AbstractGameActionFightTargetedAbilityMessage::_criticalFunc(CustomDataInput *input) {
    this->critical = input->readByte();
    if (this->critical < 0) {

    }
}
