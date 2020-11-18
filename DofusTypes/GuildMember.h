#ifndef GUILDMEMBER_H
#define GUILDMEMBER_H

#include "PlayerStatus.h"
#include "CharacterMinimalInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GuildMember : public CharacterMinimalInformations {
public:
    int breed = 0;
    bool sex = false;
    unsigned int rank = 0;
    double givenExperience = 0;
    unsigned int experienceGivenPercent = 0;
    unsigned int rights = 0;
    unsigned int connected = 99;
    int alignmentSide = 0;
    unsigned int hoursSinceLastConnection = 0;
    unsigned int moodSmileyId = 0;
    unsigned int accountId = 0;
    int achievementPoints = 0;
    PlayerStatus status;
    bool havenBagShared = false;

    void deserialize(CustomDataInput *input);

private:
    void deserializeByteBoxes(CustomDataInput *input);

    void _breedFunc(CustomDataInput *input);

    void _rankFunc(CustomDataInput *input);

    void _givenExperienceFunc(CustomDataInput *input);

    void _experienceGivenPercentFunc(CustomDataInput *input);

    void _rightsFunc(CustomDataInput *input);

    void _connectedFunc(CustomDataInput *input);

    void _alignmentSideFunc(CustomDataInput *input);

    void _hoursSinceLastConnectionFunc(CustomDataInput *input);

    void _moodSmileyIdFunc(CustomDataInput *input);

    void _accountIdFunc(CustomDataInput *input);

    void _achievementPointsFunc(CustomDataInput *input);
};

#endif