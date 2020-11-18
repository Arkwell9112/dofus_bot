#ifndef REFRESHFOLLOWEDQUESTSORDERREQUESTMESSAGE_H
#define REFRESHFOLLOWEDQUESTSORDERREQUESTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class RefreshFollowedQuestsOrderRequestMessage : public DeserializeInterface {
public:
    std::vector<unsigned int> quests;

    void deserialize(CustomDataInput *input);

private:
    void _questsFunc(CustomDataInput *input);
};

#endif