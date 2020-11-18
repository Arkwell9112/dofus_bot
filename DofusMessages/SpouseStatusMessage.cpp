#include "SpouseStatusMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void SpouseStatusMessage::deserialize(CustomDataInput *input) {
    this->_hasSpouseFunc(input);
}

void SpouseStatusMessage::_hasSpouseFunc(CustomDataInput *input) {
    this->hasSpouse = input->readBoolean();
}
