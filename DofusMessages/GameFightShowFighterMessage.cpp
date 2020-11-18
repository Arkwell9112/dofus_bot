#include "GameFightShowFighterMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/GameFightFighterInformations.h"

void GameFightShowFighterMessage::deserialize(CustomDataInput *input) {
    unsigned int _id1 = input->readUnsignedShort();
    this->informations = *dynamic_cast<GameFightFighterInformations *>(ProtocolTypeManager::getInstance(_id1, input));
    ProtocolTypeManager::deleteLastInstance();

}