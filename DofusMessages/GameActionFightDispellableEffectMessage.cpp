#include "GameActionFightDispellableEffectMessage.h"
#include "AbstractGameActionMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/AbstractFightDispellableEffect.h"

void GameActionFightDispellableEffectMessage::deserialize(CustomDataInput *input) {
    AbstractGameActionMessage::deserialize(input);
    unsigned int _id1 = input->readUnsignedShort();
    this->effect = *dynamic_cast<AbstractFightDispellableEffect *>(ProtocolTypeManager::getInstance(_id1, input));
    ProtocolTypeManager::deleteLastInstance();

}