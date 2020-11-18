#ifndef NUMERICWHOISREQUESTMESSAGE_H
#define NUMERICWHOISREQUESTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class NumericWhoIsRequestMessage : public DeserializeInterface {
public:
    double playerId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _playerIdFunc(CustomDataInput *input);
};

#endif