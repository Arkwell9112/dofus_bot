#include "MonsterInGroupInformations.h"
#include "GroupMonsterStaticInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GroupMonsterStaticInformations::deserialize(CustomDataInput *input) {
    MonsterInGroupInformations _item2;
    this->mainCreatureLightInfos.deserialize(input);
    unsigned int _underlingsLen = input->readUnsignedShort();
    for (unsigned int _i2 = 0; _i2 < _underlingsLen; _i2++) {
        _item2.deserialize(input);
        this->underlings.push_back(_item2);
    }
}