#include "PrismFightDefenderAddMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/CharacterMinimalPlusLookInformations.h"

void PrismFightDefenderAddMessage::deserialize(CustomDataInput *input) {
    this->_subAreaIdFunc(input);
    this->_fightIdFunc(input);
    unsigned int _id3 = input->readUnsignedShort();
    this->defender = *dynamic_cast<CharacterMinimalPlusLookInformations *>(ProtocolTypeManager::getInstance(_id3,
                                                                                                            input));
    ProtocolTypeManager::deleteLastInstance();

}

void PrismFightDefenderAddMessage::_subAreaIdFunc(CustomDataInput *input) {
    this->subAreaId = input->readVarUhShort();
    if (this->subAreaId < 0) {

    }
}

void PrismFightDefenderAddMessage::_fightIdFunc(CustomDataInput *input) {
    this->fightId = input->readVarUhShort();
    if (this->fightId < 0) {

    }
}
