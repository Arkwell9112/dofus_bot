#include "GameActionFightSummonMessage.h"
#include "AbstractGameActionMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/GameFightFighterInformations.h"

void GameActionFightSummonMessage::deserialize(CustomDataInput *input) {
    unsigned int _id1 = 0;
    GameFightFighterInformations _item1;
    AbstractGameActionMessage::deserialize(input);
    unsigned int _summonsLen = input->readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _summonsLen; _i1++) {
        _id1 = input->readUnsignedShort();
        _item1 = *dynamic_cast<GameFightFighterInformations *>(ProtocolTypeManager::getInstance(_id1, input));
        ProtocolTypeManager::deleteLastInstance();

        this->summons.push_back(_item1);
    }
}

void GameActionFightSummonMessage::_summonsFunc(CustomDataInput *input) {
    unsigned int _id = input->readUnsignedShort();
    GameFightFighterInformations _item;
    _item.deserialize(input);
    this->summons.push_back(_item);
}
