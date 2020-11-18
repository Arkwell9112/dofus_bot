#ifndef BASICWHOISMESSAGE_H
#define BASICWHOISMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/AbstractSocialGroupInfos.h"

#include <string>
#include <vector>

class BasicWhoIsMessage : public DeserializeInterface {
public:
    bool self = false;
    int position = -1;
    std::string accountNickname;
    unsigned int accountId = 0;
    std::string playerName;
    double playerId = 0;
    int areaId = 0;
    int serverId = 0;
    int originServerId = 0;
    std::vector<AbstractSocialGroupInfos> socialGroups;
    bool verbose = false;
    unsigned int playerState = 99;

    void deserialize(CustomDataInput *input);

private:
    void deserializeByteBoxes(CustomDataInput *input);

    void _positionFunc(CustomDataInput *input);

    void _accountNicknameFunc(CustomDataInput *input);

    void _accountIdFunc(CustomDataInput *input);

    void _playerNameFunc(CustomDataInput *input);

    void _playerIdFunc(CustomDataInput *input);

    void _areaIdFunc(CustomDataInput *input);

    void _serverIdFunc(CustomDataInput *input);

    void _originServerIdFunc(CustomDataInput *input);

    void _socialGroupsFunc(CustomDataInput *input);

    void _playerStateFunc(CustomDataInput *input);
};

#endif