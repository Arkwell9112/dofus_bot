#include "MapRunningFightDetailsMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/GameFightFighterLightInformations.h"

void MapRunningFightDetailsMessage::deserialize(CustomDataInput *input) {
    unsigned int _id2 = 0;
    GameFightFighterLightInformations _item2;
    unsigned int _id3 = 0;
    GameFightFighterLightInformations _item3;
    this->_fightIdFunc(input);
    unsigned int _attackersLen = input->readUnsignedShort();
    for (unsigned int _i2 = 0; _i2 < _attackersLen; _i2++) {
        _id2 = input->readUnsignedShort();
        _item2 = *dynamic_cast<GameFightFighterLightInformations *>(ProtocolTypeManager::getInstance(_id2, input));
        ProtocolTypeManager::deleteLastInstance();

        this->attackers.push_back(_item2);
    }
    unsigned int _defendersLen = input->readUnsignedShort();
    for (unsigned int _i3 = 0; _i3 < _defendersLen; _i3++) {
        _id3 = input->readUnsignedShort();
        _item3 = *dynamic_cast<GameFightFighterLightInformations *>(ProtocolTypeManager::getInstance(_id3, input));
        ProtocolTypeManager::deleteLastInstance();

        this->defenders.push_back(_item3);
    }
}

void MapRunningFightDetailsMessage::_fightIdFunc(CustomDataInput *input) {
    this->fightId = input->readVarUhShort();
    if (this->fightId < 0) {

    }
}

void MapRunningFightDetailsMessage::_attackersFunc(CustomDataInput *input) {
    unsigned int _id = input->readUnsignedShort();
    GameFightFighterLightInformations _item;
    _item.deserialize(input);
    this->attackers.push_back(_item);
}

void MapRunningFightDetailsMessage::_defendersFunc(CustomDataInput *input) {
    unsigned int _id = input->readUnsignedShort();
    GameFightFighterLightInformations _item;
    _item.deserialize(input);
    this->defenders.push_back(_item);
}
