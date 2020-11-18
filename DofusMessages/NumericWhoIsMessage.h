#ifndef NUMERICWHOISMESSAGE_H
#define NUMERICWHOISMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class NumericWhoIsMessage : public DeserializeInterface {
public:
    double playerId = 0;
    unsigned int accountId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _playerIdFunc(CustomDataInput *input);

    void _accountIdFunc(CustomDataInput *input);
};

#endif