#include "MonsterInGroupLightInformations.h"
#include "AlternativeMonstersInGroupLightInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void AlternativeMonstersInGroupLightInformations::deserialize(CustomDataInput *input) {
    MonsterInGroupLightInformations _item2;
    this->_playerCountFunc(input);
    unsigned int _monstersLen = input->readUnsignedShort();
    for (unsigned int _i2 = 0; _i2 < _monstersLen; _i2++) {
        _item2.deserialize(input);
        this->monsters.push_back(_item2);
    }
}

void AlternativeMonstersInGroupLightInformations::_playerCountFunc(CustomDataInput *input) {
    this->playerCount = input->readInt();
}
