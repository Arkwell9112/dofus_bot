#include "GuildCreationResultMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GuildCreationResultMessage::deserialize(CustomDataInput *input) {
    this->_resultFunc(input);
}

void GuildCreationResultMessage::_resultFunc(CustomDataInput *input) {
    this->result = input->readByte();
    if (this->result < 0) {

    }
}
