#include "FightOptionsInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void FightOptionsInformations::deserialize(CustomDataInput *input) {
    this->deserializeByteBoxes(input);
}

void FightOptionsInformations::deserializeByteBoxes(CustomDataInput *input) {
    unsigned int _box0 = input->readUnsignedByte();
    this->isSecret = BooleanByteWrapper::getFlag(_box0, 0);
    this->isRestrictedToPartyOnly = BooleanByteWrapper::getFlag(_box0, 1);
    this->isClosed = BooleanByteWrapper::getFlag(_box0, 2);
    this->isAskingForHelp = BooleanByteWrapper::getFlag(_box0, 3);
}
