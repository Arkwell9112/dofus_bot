#include "GroupMonsterStaticInformationsWithAlternatives.h"
#include "GroupMonsterStaticInformations.h"
#include "AlternativeMonstersInGroupLightInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GroupMonsterStaticInformationsWithAlternatives::deserialize(CustomDataInput *input) {
    AlternativeMonstersInGroupLightInformations _item1;
    GroupMonsterStaticInformations::deserialize(input);
    unsigned int _alternativesLen = input->readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _alternativesLen; _i1++) {
        _item1.deserialize(input);
        this->alternatives.push_back(_item1);
    }
}