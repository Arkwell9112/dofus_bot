#ifndef CHARACTERSELECTEDSUCCESSMESSAGE_H
#define CHARACTERSELECTEDSUCCESSMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/CharacterBaseInformations.h"

#include <string>
#include <vector>

class CharacterSelectedSuccessMessage : public DeserializeInterface {
public:
    CharacterBaseInformations infos;
    bool isCollectingStats = false;

    void deserialize(CustomDataInput *input);

private:
    void _isCollectingStatsFunc(CustomDataInput *input);
};

#endif