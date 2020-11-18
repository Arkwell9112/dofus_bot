#ifndef MAPNPCSQUESTSTATUSUPDATEMESSAGE_H
#define MAPNPCSQUESTSTATUSUPDATEMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/GameRolePlayNpcQuestFlag.h"

#include <string>
#include <vector>

class MapNpcsQuestStatusUpdateMessage : public DeserializeInterface {
public:
    double mapId = 0;
    std::vector<int> npcsIdsWithQuest;
    std::vector<GameRolePlayNpcQuestFlag> questFlags;
    std::vector<int> npcsIdsWithoutQuest;

    void deserialize(CustomDataInput *input);

private:
    void _mapIdFunc(CustomDataInput *input);

    void _npcsIdsWithQuestFunc(CustomDataInput *input);

    void _npcsIdsWithoutQuestFunc(CustomDataInput *input);
};

#endif