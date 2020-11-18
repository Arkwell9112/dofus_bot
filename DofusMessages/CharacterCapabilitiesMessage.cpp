#include "CharacterCapabilitiesMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void CharacterCapabilitiesMessage::deserialize(CustomDataInput *input) {
    this->_guildEmblemSymbolCategoriesFunc(input);
}

void CharacterCapabilitiesMessage::_guildEmblemSymbolCategoriesFunc(CustomDataInput *input) {
    this->guildEmblemSymbolCategories = input->readVarUhInt();
    if (this->guildEmblemSymbolCategories < 0) {

    }
}
