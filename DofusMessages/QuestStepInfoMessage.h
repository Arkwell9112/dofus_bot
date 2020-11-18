#ifndef QUESTSTEPINFOMESSAGE_H
#define QUESTSTEPINFOMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/QuestActiveInformations.h"

#include <string>
#include <vector>

class QuestStepInfoMessage : public DeserializeInterface {
public:
    QuestActiveInformations infos;

    void deserialize(CustomDataInput *input);

private:
};

#endif