#include "GameRolePlayShowMultipleActorsMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/GameRolePlayActorInformations.h"

void GameRolePlayShowMultipleActorsMessage::deserialize(CustomDataInput *input) {
    unsigned int _id1 = 0;
    GameRolePlayActorInformations _item1;
    unsigned int _informationsListLen = input->readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _informationsListLen; _i1++) {
        _id1 = input->readUnsignedShort();
        _item1 = *dynamic_cast<GameRolePlayActorInformations *>(ProtocolTypeManager::getInstance(_id1, input));
        ProtocolTypeManager::deleteLastInstance();

        this->informationsList.push_back(_item1);
    }
}

void GameRolePlayShowMultipleActorsMessage::_informationsListFunc(CustomDataInput *input) {
    unsigned int _id = input->readUnsignedShort();
    GameRolePlayActorInformations _item;
    _item.deserialize(input);
    this->informationsList.push_back(_item);
}
