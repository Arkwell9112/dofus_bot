#ifndef GAMEROLEPLAYARENAFIGHTPROPOSITIONMESSAGE_H
#define GAMEROLEPLAYARENAFIGHTPROPOSITIONMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GameRolePlayArenaFightPropositionMessage : public DeserializeInterface {
public:
    unsigned int fightId = 0;
    std::vector<double> alliesId;
    unsigned int duration = 0;

    void deserialize(CustomDataInput *input);

private:
    void _fightIdFunc(CustomDataInput *input);

    void _alliesIdFunc(CustomDataInput *input);

    void _durationFunc(CustomDataInput *input);
};

#endif