#ifndef FRIENDONLINEINFORMATIONS_H
#define FRIENDONLINEINFORMATIONS_H

#include "PlayerStatus.h"
#include "GuildInformations.h"
#include "FriendInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class FriendOnlineInformations : public FriendInformations {
public:
    double playerId = 0;
    std::string playerName;
    unsigned int level = 0;
    int alignmentSide = 0;
    int breed = 0;
    bool sex = false;
    GuildInformations guildInfo;
    unsigned int moodSmileyId = 0;
    PlayerStatus status;
    bool havenBagShared = false;

    void deserialize(CustomDataInput *input);

private:
    void deserializeByteBoxes(CustomDataInput *input);

    void _playerIdFunc(CustomDataInput *input);

    void _playerNameFunc(CustomDataInput *input);

    void _levelFunc(CustomDataInput *input);

    void _alignmentSideFunc(CustomDataInput *input);

    void _breedFunc(CustomDataInput *input);

    void _moodSmileyIdFunc(CustomDataInput *input);
};

#endif