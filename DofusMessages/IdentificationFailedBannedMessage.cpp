#include "IdentificationFailedMessage.h"
#include "IdentificationFailedBannedMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void IdentificationFailedBannedMessage::deserialize(CustomDataInput *input) {
    IdentificationFailedMessage::deserialize(input);
    this->_banEndDateFunc(input);
}

void IdentificationFailedBannedMessage::_banEndDateFunc(CustomDataInput *input) {
    this->banEndDate = input->readDouble();
    if (this->banEndDate < 0 || this->banEndDate > 9007199254740990) {

    }
}
