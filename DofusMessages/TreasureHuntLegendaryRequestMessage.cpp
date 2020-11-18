#include "TreasureHuntLegendaryRequestMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void TreasureHuntLegendaryRequestMessage::deserialize(CustomDataInput *input) {
    this->_legendaryIdFunc(input);
}

void TreasureHuntLegendaryRequestMessage::_legendaryIdFunc(CustomDataInput *input) {
    this->legendaryId = input->readVarUhShort();
    if (this->legendaryId < 0) {

    }
}
