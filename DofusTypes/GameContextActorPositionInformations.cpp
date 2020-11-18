#include "GameContextActorPositionInformations.h"
#include "EntityDispositionInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GameContextActorPositionInformations::deserialize(CustomDataInput *input) {
    this->_contextualIdFunc(input);
    unsigned int _id2 = input->readUnsignedShort();
    this->disposition = *dynamic_cast<EntityDispositionInformations *>(ProtocolTypeManager::getInstance(_id2, input));
    ProtocolTypeManager::deleteLastInstance();

}

void GameContextActorPositionInformations::_contextualIdFunc(CustomDataInput *input) {
    this->contextualId = input->readDouble();
    if (this->contextualId < -9007199254740990 || this->contextualId > 9007199254740990) {

    }
}
