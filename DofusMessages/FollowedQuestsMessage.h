#ifndef FOLLOWEDQUESTSMESSAGE_H
#define FOLLOWEDQUESTSMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/QuestActiveDetailedInformations.h"

#include <string>
#include <vector>

class FollowedQuestsMessage : public DeserializeInterface {
public:
    std::vector<QuestActiveDetailedInformations> quests;

    void deserialize(CustomDataInput *input);

private:
};

#endif