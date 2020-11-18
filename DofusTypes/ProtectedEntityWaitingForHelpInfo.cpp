#include "ProtectedEntityWaitingForHelpInfo.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ProtectedEntityWaitingForHelpInfo::deserialize(CustomDataInput *input) {
    this->_timeLeftBeforeFightFunc(input);
    this->_waitTimeForPlacementFunc(input);
    this->_nbPositionForDefensorsFunc(input);
}

void ProtectedEntityWaitingForHelpInfo::_timeLeftBeforeFightFunc(CustomDataInput *input) {
    this->timeLeftBeforeFight = input->readInt();
}

void ProtectedEntityWaitingForHelpInfo::_waitTimeForPlacementFunc(CustomDataInput *input) {
    this->waitTimeForPlacement = input->readInt();
}

void ProtectedEntityWaitingForHelpInfo::_nbPositionForDefensorsFunc(CustomDataInput *input) {
    this->nbPositionForDefensors = input->readByte();
    if (this->nbPositionForDefensors < 0) {

    }
}
