#ifndef KOHUPDATEMESSAGE_H
#define KOHUPDATEMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/BasicAllianceInformations.h"

#include "../DofusTypes/AllianceInformations.h"

#include <string>
#include <vector>

class KohUpdateMessage : public DeserializeInterface {
public:
    std::vector<AllianceInformations> alliances;
    std::vector<unsigned int> allianceNbMembers;
    std::vector<unsigned int> allianceRoundWeigth;
    std::vector<unsigned int> allianceMatchScore;
    std::vector<BasicAllianceInformations> allianceMapWinners;
    unsigned int allianceMapWinnerScore = 0;
    unsigned int allianceMapMyAllianceScore = 0;
    double nextTickTime = 0;

    void deserialize(CustomDataInput *input);

private:
    void _allianceNbMembersFunc(CustomDataInput *input);

    void _allianceRoundWeigthFunc(CustomDataInput *input);

    void _allianceMatchScoreFunc(CustomDataInput *input);

    void _allianceMapWinnerScoreFunc(CustomDataInput *input);

    void _allianceMapMyAllianceScoreFunc(CustomDataInput *input);

    void _nextTickTimeFunc(CustomDataInput *input);
};

#endif