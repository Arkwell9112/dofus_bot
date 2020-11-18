#include "URLOpenMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void URLOpenMessage::deserialize(CustomDataInput *input) {
    this->_urlIdFunc(input);
}

void URLOpenMessage::_urlIdFunc(CustomDataInput *input) {
    this->urlId = input->readByte();
    if (this->urlId < 0) {

    }
}
