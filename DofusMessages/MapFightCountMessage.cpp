#include "MapFightCountMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void MapFightCountMessage::deserialize(CustomDataInput *input) {
    this->_fightCountFunc(input);
}

void MapFightCountMessage::_fightCountFunc(CustomDataInput *input) {
    this->fightCount = input->readVarUhShort();
    if (this->fightCount < 0) {

    }
}
