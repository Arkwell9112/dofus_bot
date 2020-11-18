#include "GameFightEndMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/NamedPartyTeamWithOutcome.h"

#include "../DofusTypes/NamedPartyTeam.h"

#include "../DofusTypes/FightResultListEntry.h"

void GameFightEndMessage::deserialize(CustomDataInput *input) {
    unsigned int _id4 = 0;
    FightResultListEntry _item4;
    NamedPartyTeamWithOutcome _item5;
    this->_durationFunc(input);
    this->_rewardRateFunc(input);
    this->_lootShareLimitMalusFunc(input);
    unsigned int _resultsLen = input->readUnsignedShort();
    for (unsigned int _i4 = 0; _i4 < _resultsLen; _i4++) {
        _id4 = input->readUnsignedShort();
        _item4 = *dynamic_cast<FightResultListEntry *>(ProtocolTypeManager::getInstance(_id4, input));
        ProtocolTypeManager::deleteLastInstance();

        this->results.push_back(_item4);
    }
    unsigned int _namedPartyTeamsOutcomesLen = input->readUnsignedShort();
    for (unsigned int _i5 = 0; _i5 < _namedPartyTeamsOutcomesLen; _i5++) {
        _item5.deserialize(input);
        this->namedPartyTeamsOutcomes.push_back(_item5);
    }
}

void GameFightEndMessage::_durationFunc(CustomDataInput *input) {
    this->duration = input->readInt();
    if (this->duration < 0) {

    }
}

void GameFightEndMessage::_rewardRateFunc(CustomDataInput *input) {
    this->rewardRate = input->readVarShort();
}

void GameFightEndMessage::_lootShareLimitMalusFunc(CustomDataInput *input) {
    this->lootShareLimitMalus = input->readShort();
}

void GameFightEndMessage::_resultsFunc(CustomDataInput *input) {
    unsigned int _id = input->readUnsignedShort();
    FightResultListEntry _item;
    _item.deserialize(input);
    this->results.push_back(_item);
}
