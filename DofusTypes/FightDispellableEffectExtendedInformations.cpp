#include "FightDispellableEffectExtendedInformations.h"
#include "AbstractFightDispellableEffect.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void FightDispellableEffectExtendedInformations::deserialize(CustomDataInput *input) {
    this->_actionIdFunc(input);
    this->_sourceIdFunc(input);
    unsigned int _id3 = input->readUnsignedShort();
    this->effect = *dynamic_cast<AbstractFightDispellableEffect *>(ProtocolTypeManager::getInstance(_id3, input));
    ProtocolTypeManager::deleteLastInstance();

}

void FightDispellableEffectExtendedInformations::_actionIdFunc(CustomDataInput *input) {
    this->actionId = input->readVarUhShort();
    if (this->actionId < 0) {

    }
}

void FightDispellableEffectExtendedInformations::_sourceIdFunc(CustomDataInput *input) {
    this->sourceId = input->readDouble();
    if (this->sourceId < -9007199254740990 || this->sourceId > 9007199254740990) {

    }
}
