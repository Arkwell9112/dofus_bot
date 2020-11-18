#ifndef UPDATEMAPPLAYERSAGRESSABLESTATUSMESSAGE_H
#define UPDATEMAPPLAYERSAGRESSABLESTATUSMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class UpdateMapPlayersAgressableStatusMessage : public DeserializeInterface {
public:
    std::vector<double> playerIds;
    std::vector<unsigned int> enable;

    void deserialize(CustomDataInput *input);

private:
    void _playerIdsFunc(CustomDataInput *input);

    void _enableFunc(CustomDataInput *input);
};

#endif