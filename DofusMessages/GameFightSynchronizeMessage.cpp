#include "GameFightSynchronizeMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/GameFightFighterInformations.h"

void GameFightSynchronizeMessage::deserialize(CustomDataInput *input) {
    unsigned int _id1 = 0;
    GameFightFighterInformations _item1;
    unsigned int _fightersLen = input->readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _fightersLen; _i1++) {
        _id1 = input->readUnsignedShort();
        _item1 = *dynamic_cast<GameFightFighterInformations *>(ProtocolTypeManager::getInstance(_id1, input));
        ProtocolTypeManager::deleteLastInstance();

        this->fighters.push_back(_item1);
    }
}

void GameFightSynchronizeMessage::_fightersFunc(CustomDataInput *input) {
    unsigned int _id = input->readUnsignedShort();
    GameFightFighterInformations _item;
    _item.deserialize(input);
    this->fighters.push_back(_item);
}
