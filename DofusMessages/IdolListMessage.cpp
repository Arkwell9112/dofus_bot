#include "IdolListMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/PartyIdol.h"

#include "../DofusTypes/Idol.h"

void IdolListMessage::deserialize(CustomDataInput *input) {
    unsigned int _val1 = 0;
    unsigned int _val2 = 0;
    unsigned int _id3 = 0;
    PartyIdol _item3;
    unsigned int _chosenIdolsLen = input->readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _chosenIdolsLen; _i1++) {
        _val1 = input->readVarUhShort();
        if (_val1 < 0) {

        }
        this->chosenIdols.push_back(_val1);
    }
    unsigned int _partyChosenIdolsLen = input->readUnsignedShort();
    for (unsigned int _i2 = 0; _i2 < _partyChosenIdolsLen; _i2++) {
        _val2 = input->readVarUhShort();
        if (_val2 < 0) {

        }
        this->partyChosenIdols.push_back(_val2);
    }
    unsigned int _partyIdolsLen = input->readUnsignedShort();
    for (unsigned int _i3 = 0; _i3 < _partyIdolsLen; _i3++) {
        _id3 = input->readUnsignedShort();
        _item3 = *dynamic_cast<PartyIdol *>(ProtocolTypeManager::getInstance(_id3, input));
        ProtocolTypeManager::deleteLastInstance();

        this->partyIdols.push_back(_item3);
    }
}

void IdolListMessage::_chosenIdolsFunc(CustomDataInput *input) {
    unsigned int _val = input->readVarUhShort();
    if (_val < 0) {

    }
    this->chosenIdols.push_back(_val);
}

void IdolListMessage::_partyChosenIdolsFunc(CustomDataInput *input) {
    unsigned int _val = input->readVarUhShort();
    if (_val < 0) {

    }
    this->partyChosenIdols.push_back(_val);
}

void IdolListMessage::_partyIdolsFunc(CustomDataInput *input) {
    unsigned int _id = input->readUnsignedShort();
    PartyIdol _item;
    _item.deserialize(input);
    this->partyIdols.push_back(_item);
}
