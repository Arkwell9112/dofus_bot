#ifndef GUILDCHANGEMEMBERPARAMETERSMESSAGE_H
#define GUILDCHANGEMEMBERPARAMETERSMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GuildChangeMemberParametersMessage : public DeserializeInterface {
public:
    double memberId = 0;
    unsigned int rank = 0;
    unsigned int experienceGivenPercent = 0;
    unsigned int rights = 0;

    void deserialize(CustomDataInput *input);

private:
    void _memberIdFunc(CustomDataInput *input);

    void _rankFunc(CustomDataInput *input);

    void _experienceGivenPercentFunc(CustomDataInput *input);

    void _rightsFunc(CustomDataInput *input);
};

#endif