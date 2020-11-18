#include "ObjectEffectInteger.h"
#include "ObjectEffect.h"
#include "MountClientData.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void MountClientData::deserialize(CustomDataInput *input) {
    unsigned int _val3 = 0;
    unsigned int _val4 = 0;
    ObjectEffectInteger _item34;
    this->deserializeByteBoxes(input);
    this->_idFunc(input);
    this->_modelFunc(input);
    unsigned int _ancestorLen = input->readUnsignedShort();
    for (unsigned int _i3 = 0; _i3 < _ancestorLen; _i3++) {
        _val3 = input->readInt();
        if (_val3 < 0) {

        }
        this->ancestor.push_back(_val3);
    }
    unsigned int _behaviorsLen = input->readUnsignedShort();
    for (unsigned int _i4 = 0; _i4 < _behaviorsLen; _i4++) {
        _val4 = input->readInt();
        if (_val4 < 0) {

        }
        this->behaviors.push_back(_val4);
    }
    this->_nameFunc(input);
    this->_ownerIdFunc(input);
    this->_experienceFunc(input);
    this->_experienceForLevelFunc(input);
    this->_experienceForNextLevelFunc(input);
    this->_levelFunc(input);
    this->_maxPodsFunc(input);
    this->_staminaFunc(input);
    this->_staminaMaxFunc(input);
    this->_maturityFunc(input);
    this->_maturityForAdultFunc(input);
    this->_energyFunc(input);
    this->_energyMaxFunc(input);
    this->_serenityFunc(input);
    this->_aggressivityMaxFunc(input);
    this->_serenityMaxFunc(input);
    this->_loveFunc(input);
    this->_loveMaxFunc(input);
    this->_fecondationTimeFunc(input);
    this->_boostLimiterFunc(input);
    this->_boostMaxFunc(input);
    this->_reproductionCountFunc(input);
    this->_reproductionCountMaxFunc(input);
    this->_harnessGIDFunc(input);
    unsigned int _effectListLen = input->readUnsignedShort();
    for (unsigned int _i34 = 0; _i34 < _effectListLen; _i34++) {
        _item34.deserialize(input);
        this->effectList.push_back(_item34);
    }
}

void MountClientData::deserializeByteBoxes(CustomDataInput *input) {
    unsigned int _box0 = input->readUnsignedByte();
    this->sex = BooleanByteWrapper::getFlag(_box0, 0);
    this->isRideable = BooleanByteWrapper::getFlag(_box0, 1);
    this->isWild = BooleanByteWrapper::getFlag(_box0, 2);
    this->isFecondationReady = BooleanByteWrapper::getFlag(_box0, 3);
    this->useHarnessColors = BooleanByteWrapper::getFlag(_box0, 4);
}

void MountClientData::_idFunc(CustomDataInput *input) {
    this->id = input->readDouble();
    if (this->id < -9007199254740990 || this->id > 9007199254740990) {

    }
}

void MountClientData::_modelFunc(CustomDataInput *input) {
    this->model = input->readVarUhInt();
    if (this->model < 0) {

    }
}

void MountClientData::_ancestorFunc(CustomDataInput *input) {
    unsigned int _val = input->readInt();
    if (_val < 0) {

    }
    this->ancestor.push_back(_val);
}

void MountClientData::_behaviorsFunc(CustomDataInput *input) {
    unsigned int _val = input->readInt();
    if (_val < 0) {

    }
    this->behaviors.push_back(_val);
}

void MountClientData::_nameFunc(CustomDataInput *input) {
    this->name = input->readUTF();
}

void MountClientData::_ownerIdFunc(CustomDataInput *input) {
    this->ownerId = input->readInt();
    if (this->ownerId < 0) {

    }
}

void MountClientData::_experienceFunc(CustomDataInput *input) {
    this->experience = input->readVarUhLong();
    if (this->experience < 0 || this->experience > 9007199254740990) {

    }
}

void MountClientData::_experienceForLevelFunc(CustomDataInput *input) {
    this->experienceForLevel = input->readVarUhLong();
    if (this->experienceForLevel < 0 || this->experienceForLevel > 9007199254740990) {

    }
}

void MountClientData::_experienceForNextLevelFunc(CustomDataInput *input) {
    this->experienceForNextLevel = input->readDouble();
    if (this->experienceForNextLevel < -9007199254740990 || this->experienceForNextLevel > 9007199254740990) {

    }
}

void MountClientData::_levelFunc(CustomDataInput *input) {
    this->level = input->readByte();
    if (this->level < 0) {

    }
}

void MountClientData::_maxPodsFunc(CustomDataInput *input) {
    this->maxPods = input->readVarUhInt();
    if (this->maxPods < 0) {

    }
}

void MountClientData::_staminaFunc(CustomDataInput *input) {
    this->stamina = input->readVarUhInt();
    if (this->stamina < 0) {

    }
}

void MountClientData::_staminaMaxFunc(CustomDataInput *input) {
    this->staminaMax = input->readVarUhInt();
    if (this->staminaMax < 0) {

    }
}

void MountClientData::_maturityFunc(CustomDataInput *input) {
    this->maturity = input->readVarUhInt();
    if (this->maturity < 0) {

    }
}

void MountClientData::_maturityForAdultFunc(CustomDataInput *input) {
    this->maturityForAdult = input->readVarUhInt();
    if (this->maturityForAdult < 0) {

    }
}

void MountClientData::_energyFunc(CustomDataInput *input) {
    this->energy = input->readVarUhInt();
    if (this->energy < 0) {

    }
}

void MountClientData::_energyMaxFunc(CustomDataInput *input) {
    this->energyMax = input->readVarUhInt();
    if (this->energyMax < 0) {

    }
}

void MountClientData::_serenityFunc(CustomDataInput *input) {
    this->serenity = input->readInt();
}

void MountClientData::_aggressivityMaxFunc(CustomDataInput *input) {
    this->aggressivityMax = input->readInt();
}

void MountClientData::_serenityMaxFunc(CustomDataInput *input) {
    this->serenityMax = input->readVarUhInt();
    if (this->serenityMax < 0) {

    }
}

void MountClientData::_loveFunc(CustomDataInput *input) {
    this->love = input->readVarUhInt();
    if (this->love < 0) {

    }
}

void MountClientData::_loveMaxFunc(CustomDataInput *input) {
    this->loveMax = input->readVarUhInt();
    if (this->loveMax < 0) {

    }
}

void MountClientData::_fecondationTimeFunc(CustomDataInput *input) {
    this->fecondationTime = input->readInt();
}

void MountClientData::_boostLimiterFunc(CustomDataInput *input) {
    this->boostLimiter = input->readInt();
    if (this->boostLimiter < 0) {

    }
}

void MountClientData::_boostMaxFunc(CustomDataInput *input) {
    this->boostMax = input->readDouble();
    if (this->boostMax < -9007199254740990 || this->boostMax > 9007199254740990) {

    }
}

void MountClientData::_reproductionCountFunc(CustomDataInput *input) {
    this->reproductionCount = input->readInt();
}

void MountClientData::_reproductionCountMaxFunc(CustomDataInput *input) {
    this->reproductionCountMax = input->readVarUhInt();
    if (this->reproductionCountMax < 0) {

    }
}

void MountClientData::_harnessGIDFunc(CustomDataInput *input) {
    this->harnessGID = input->readVarUhShort();
    if (this->harnessGID < 0) {

    }
}
