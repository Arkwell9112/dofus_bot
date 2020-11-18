#include "MountFeedRequestMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void MountFeedRequestMessage::deserialize(CustomDataInput *input) {
    this->_mountUidFunc(input);
    this->_mountLocationFunc(input);
    this->_mountFoodUidFunc(input);
    this->_quantityFunc(input);
}

void MountFeedRequestMessage::_mountUidFunc(CustomDataInput *input) {
    this->mountUid = input->readVarUhInt();
    if (this->mountUid < 0) {

    }
}

void MountFeedRequestMessage::_mountLocationFunc(CustomDataInput *input) {
    this->mountLocation = input->readByte();
}

void MountFeedRequestMessage::_mountFoodUidFunc(CustomDataInput *input) {
    this->mountFoodUid = input->readVarUhInt();
    if (this->mountFoodUid < 0) {

    }
}

void MountFeedRequestMessage::_quantityFunc(CustomDataInput *input) {
    this->quantity = input->readVarUhInt();
    if (this->quantity < 0) {

    }
}
