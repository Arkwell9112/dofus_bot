#ifndef UNFOLLOWQUESTOBJECTIVEREQUESTMESSAGE_H
#define UNFOLLOWQUESTOBJECTIVEREQUESTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class UnfollowQuestObjectiveRequestMessage : public DeserializeInterface {
public:
    unsigned int questId = 0;
    int objectiveId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _questIdFunc(CustomDataInput *input);

    void _objectiveIdFunc(CustomDataInput *input);
};

#endif