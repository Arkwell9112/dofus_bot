#include "HumanOptionEmote.h"
#include "HumanOption.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void HumanOptionEmote::deserialize(CustomDataInput *input) {
    HumanOption::deserialize(input);
    this->_emoteIdFunc(input);
    this->_emoteStartTimeFunc(input);
}

void HumanOptionEmote::_emoteIdFunc(CustomDataInput *input) {
    this->emoteId = input->readUnsignedByte();
    if (this->emoteId < 0 || this->emoteId > 255) {

    }
}

void HumanOptionEmote::_emoteStartTimeFunc(CustomDataInput *input) {
    this->emoteStartTime = input->readDouble();
    if (this->emoteStartTime < -9007199254740990 || this->emoteStartTime > 9007199254740990) {

    }
}
