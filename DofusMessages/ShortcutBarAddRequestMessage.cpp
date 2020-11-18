#include "ShortcutBarAddRequestMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/Shortcut.h"

void ShortcutBarAddRequestMessage::deserialize(CustomDataInput *input) {
    this->_barTypeFunc(input);
    unsigned int _id2 = input->readUnsignedShort();
    this->shortcut = *dynamic_cast<Shortcut *>(ProtocolTypeManager::getInstance(_id2, input));
    ProtocolTypeManager::deleteLastInstance();

}

void ShortcutBarAddRequestMessage::_barTypeFunc(CustomDataInput *input) {
    this->barType = input->readByte();
    if (this->barType < 0) {

    }
}
