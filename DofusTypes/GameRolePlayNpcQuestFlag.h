#ifndef GAMEROLEPLAYNPCQUESTFLAG_H
#define GAMEROLEPLAYNPCQUESTFLAG_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GameRolePlayNpcQuestFlag : public DeserializeInterface {
public:
    std::vector<unsigned int> questsToValidId;
    std::vector<unsigned int> questsToStartId;

    void deserialize(CustomDataInput *input);

private:
    void _questsToValidIdFunc(CustomDataInput *input);

    void _questsToStartIdFunc(CustomDataInput *input);
};

#endif