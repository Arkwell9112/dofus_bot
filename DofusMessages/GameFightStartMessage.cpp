#include "GameFightStartMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/Idol.h"

void GameFightStartMessage::deserialize(CustomDataInput *input) {
    Idol _item1;
    unsigned int _idolsLen = input->readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _idolsLen; _i1++) {
        _item1.deserialize(input);
        this->idols.push_back(_item1);
    }
}