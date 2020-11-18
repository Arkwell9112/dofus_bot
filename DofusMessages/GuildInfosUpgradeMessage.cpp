#include "GuildInfosUpgradeMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GuildInfosUpgradeMessage::deserialize(CustomDataInput *input) {
    unsigned int _val9 = 0;
    int _val10 = 0;
    this->_maxTaxCollectorsCountFunc(input);
    this->_taxCollectorsCountFunc(input);
    this->_taxCollectorLifePointsFunc(input);
    this->_taxCollectorDamagesBonusesFunc(input);
    this->_taxCollectorPodsFunc(input);
    this->_taxCollectorProspectingFunc(input);
    this->_taxCollectorWisdomFunc(input);
    this->_boostPointsFunc(input);
    unsigned int _spellIdLen = input->readUnsignedShort();
    for (unsigned int _i9 = 0; _i9 < _spellIdLen; _i9++) {
        _val9 = input->readVarUhShort();
        if (_val9 < 0) {

        }
        this->spellId.push_back(_val9);
    }
    unsigned int _spellLevelLen = input->readUnsignedShort();
    for (unsigned int _i10 = 0; _i10 < _spellLevelLen; _i10++) {
        _val10 = input->readShort();
        this->spellLevel.push_back(_val10);
    }
}

void GuildInfosUpgradeMessage::_maxTaxCollectorsCountFunc(CustomDataInput *input) {
    this->maxTaxCollectorsCount = input->readByte();
    if (this->maxTaxCollectorsCount < 0) {

    }
}

void GuildInfosUpgradeMessage::_taxCollectorsCountFunc(CustomDataInput *input) {
    this->taxCollectorsCount = input->readByte();
    if (this->taxCollectorsCount < 0) {

    }
}

void GuildInfosUpgradeMessage::_taxCollectorLifePointsFunc(CustomDataInput *input) {
    this->taxCollectorLifePoints = input->readVarUhShort();
    if (this->taxCollectorLifePoints < 0) {

    }
}

void GuildInfosUpgradeMessage::_taxCollectorDamagesBonusesFunc(CustomDataInput *input) {
    this->taxCollectorDamagesBonuses = input->readVarUhShort();
    if (this->taxCollectorDamagesBonuses < 0) {

    }
}

void GuildInfosUpgradeMessage::_taxCollectorPodsFunc(CustomDataInput *input) {
    this->taxCollectorPods = input->readVarUhShort();
    if (this->taxCollectorPods < 0) {

    }
}

void GuildInfosUpgradeMessage::_taxCollectorProspectingFunc(CustomDataInput *input) {
    this->taxCollectorProspecting = input->readVarUhShort();
    if (this->taxCollectorProspecting < 0) {

    }
}

void GuildInfosUpgradeMessage::_taxCollectorWisdomFunc(CustomDataInput *input) {
    this->taxCollectorWisdom = input->readVarUhShort();
    if (this->taxCollectorWisdom < 0) {

    }
}

void GuildInfosUpgradeMessage::_boostPointsFunc(CustomDataInput *input) {
    this->boostPoints = input->readVarUhShort();
    if (this->boostPoints < 0) {

    }
}

void GuildInfosUpgradeMessage::_spellIdFunc(CustomDataInput *input) {
    unsigned int _val = input->readVarUhShort();
    if (_val < 0) {

    }
    this->spellId.push_back(_val);
}

void GuildInfosUpgradeMessage::_spellLevelFunc(CustomDataInput *input) {
    int _val = input->readShort();
    this->spellLevel.push_back(_val);
}
