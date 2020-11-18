#include "PrismFightAttackerAddMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/CharacterMinimalPlusLookInformations.h"

void PrismFightAttackerAddMessage::deserialize(CustomDataInput *input) {
    this->_subAreaIdFunc(input);
    this->_fightIdFunc(input);
    unsigned int _id3 = input->readUnsignedShort();
    this->attacker = *dynamic_cast<CharacterMinimalPlusLookInformations *>(ProtocolTypeManager::getInstance(_id3,
                                                                                                            input));
    ProtocolTypeManager::deleteLastInstance();

}

void PrismFightAttackerAddMessage::_subAreaIdFunc(CustomDataInput *input) {
    this->subAreaId = input->readVarUhShort();
    if (this->subAreaId < 0) {

    }
}

void PrismFightAttackerAddMessage::_fightIdFunc(CustomDataInput *input) {
    this->fightId = input->readVarUhShort();
    if (this->fightId < 0) {

    }
}
