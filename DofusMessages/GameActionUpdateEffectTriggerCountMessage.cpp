#include "GameActionUpdateEffectTriggerCountMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/GameFightEffectTriggerCount.h"

void GameActionUpdateEffectTriggerCountMessage::deserialize(CustomDataInput *input) {
    GameFightEffectTriggerCount _item1;
    unsigned int _targetIdsLen = input->readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _targetIdsLen; _i1++) {
        _item1.deserialize(input);
        this->targetIds.push_back(_item1);
    }
}