#include "GameFightSpectateMessage.h"
#include "GameFightResumeMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/GameFightSpellCooldown.h"

void GameFightResumeMessage::deserialize(CustomDataInput *input) {
    GameFightSpellCooldown _item1;
    GameFightSpectateMessage::deserialize(input);
    unsigned int _spellCooldownsLen = input->readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _spellCooldownsLen; _i1++) {
        _item1.deserialize(input);
        this->spellCooldowns.push_back(_item1);
    }
    this->_summonCountFunc(input);
    this->_bombCountFunc(input);
}

void GameFightResumeMessage::_summonCountFunc(CustomDataInput *input) {
    this->summonCount = input->readByte();
    if (this->summonCount < 0) {

    }
}

void GameFightResumeMessage::_bombCountFunc(CustomDataInput *input) {
    this->bombCount = input->readByte();
    if (this->bombCount < 0) {

    }
}
