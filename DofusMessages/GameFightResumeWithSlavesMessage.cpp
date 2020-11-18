#include "GameFightResumeWithSlavesMessage.h"
#include "GameFightResumeMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/GameFightResumeSlaveInfo.h"

void GameFightResumeWithSlavesMessage::deserialize(CustomDataInput *input) {
    GameFightResumeSlaveInfo _item1;
    GameFightResumeMessage::deserialize(input);
    unsigned int _slavesInfoLen = input->readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _slavesInfoLen; _i1++) {
        _item1.deserialize(input);
        this->slavesInfo.push_back(_item1);
    }
}