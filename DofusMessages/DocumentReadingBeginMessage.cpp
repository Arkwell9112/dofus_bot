#include "DocumentReadingBeginMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void DocumentReadingBeginMessage::deserialize(CustomDataInput *input) {
    this->_documentIdFunc(input);
}

void DocumentReadingBeginMessage::_documentIdFunc(CustomDataInput *input) {
    this->documentId = input->readVarUhShort();
    if (this->documentId < 0) {

    }
}
