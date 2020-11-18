#include "TrustStatusMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void TrustStatusMessage::deserialize(CustomDataInput *input) {
    this->deserializeByteBoxes(input);
}

void TrustStatusMessage::deserializeByteBoxes(CustomDataInput *input) {
    unsigned int _box0 = input->readUnsignedByte();
    this->trusted = BooleanByteWrapper::getFlag(_box0, 0);
    this->certified = BooleanByteWrapper::getFlag(_box0, 1);
}
