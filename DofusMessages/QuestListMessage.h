#ifndef QUESTLISTMESSAGE_H
#define QUESTLISTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/QuestActiveInformations.h"

#include <string>
#include <vector>

class QuestListMessage : public DeserializeInterface {
public:
    std::vector<unsigned int> finishedQuestsIds;
    std::vector<unsigned int> finishedQuestsCounts;
    std::vector<QuestActiveInformations> activeQuests;
    std::vector<unsigned int> reinitDoneQuestsIds;

    void deserialize(CustomDataInput *input);

private:
    void _finishedQuestsIdsFunc(CustomDataInput *input);

    void _finishedQuestsCountsFunc(CustomDataInput *input);

    void _activeQuestsFunc(CustomDataInput *input);

    void _reinitDoneQuestsIdsFunc(CustomDataInput *input);
};

#endif