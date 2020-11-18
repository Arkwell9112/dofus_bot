#include "ShortcutBarReplacedMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/Shortcut.h"

void ShortcutBarReplacedMessage::deserialize(CustomDataInput *input) {
    this->_barTypeFunc(input);
    unsigned int _id2 = input->readUnsignedShort();
    this->shortcut = *dynamic_cast<Shortcut *>(ProtocolTypeManager::getInstance(_id2, input));
    ProtocolTypeManager::deleteLastInstance();

}

void ShortcutBarReplacedMessage::_barTypeFunc(CustomDataInput *input) {
    this->barType = input->readByte();
    if (this->barType < 0) {

    }
}
