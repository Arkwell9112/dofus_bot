#ifndef ACQUAINTANCEONLINEINFORMATION_H
#define ACQUAINTANCEONLINEINFORMATION_H

#include "PlayerStatus.h"
#include "AcquaintanceInformation.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class AcquaintanceOnlineInformation : public AcquaintanceInformation {
public:
    double playerId = 0;
    std::string playerName;
    unsigned int moodSmileyId = 0;
    PlayerStatus status;

    void deserialize(CustomDataInput *input);

private:
    void _playerIdFunc(CustomDataInput *input);

    void _playerNameFunc(CustomDataInput *input);

    void _moodSmileyIdFunc(CustomDataInput *input);
};

#endif