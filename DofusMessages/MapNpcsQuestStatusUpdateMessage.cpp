#include "MapNpcsQuestStatusUpdateMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/GameRolePlayNpcQuestFlag.h"

void MapNpcsQuestStatusUpdateMessage::deserialize(CustomDataInput *input) {
    int _val2 = 0;
    GameRolePlayNpcQuestFlag _item3;
    int _val4 = 0;
    this->_mapIdFunc(input);
    unsigned int _npcsIdsWithQuestLen = input->readUnsignedShort();
    for (unsigned int _i2 = 0; _i2 < _npcsIdsWithQuestLen; _i2++) {
        _val2 = input->readInt();
        this->npcsIdsWithQuest.push_back(_val2);
    }
    unsigned int _questFlagsLen = input->readUnsignedShort();
    for (unsigned int _i3 = 0; _i3 < _questFlagsLen; _i3++) {
        _item3.deserialize(input);
        this->questFlags.push_back(_item3);
    }
    unsigned int _npcsIdsWithoutQuestLen = input->readUnsignedShort();
    for (unsigned int _i4 = 0; _i4 < _npcsIdsWithoutQuestLen; _i4++) {
        _val4 = input->readInt();
        this->npcsIdsWithoutQuest.push_back(_val4);
    }
}

void MapNpcsQuestStatusUpdateMessage::_mapIdFunc(CustomDataInput *input) {
    this->mapId = input->readDouble();
    if (this->mapId < 0 || this->mapId > 9007199254740990) {

    }
}

void MapNpcsQuestStatusUpdateMessage::_npcsIdsWithQuestFunc(CustomDataInput *input) {
    int _val = input->readInt();
    this->npcsIdsWithQuest.push_back(_val);
}

void MapNpcsQuestStatusUpdateMessage::_npcsIdsWithoutQuestFunc(CustomDataInput *input) {
    int _val = input->readInt();
    this->npcsIdsWithoutQuest.push_back(_val);
}
