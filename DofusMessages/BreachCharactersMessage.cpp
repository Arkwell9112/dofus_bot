#include "BreachCharactersMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void BreachCharactersMessage::deserialize(CustomDataInput *input) {
    double _val1 = 0;
    unsigned int _charactersLen = input->readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _charactersLen; _i1++) {
        _val1 = input->readVarUhLong();
        if (_val1 < 0 || _val1 > 9007199254740990) {

        }
        this->characters.push_back(_val1);
    }
}

void BreachCharactersMessage::_charactersFunc(CustomDataInput *input) {
    double _val = input->readVarUhLong();
    if (_val < 0 || _val > 9007199254740990) {

    }
    this->characters.push_back(_val);
}
