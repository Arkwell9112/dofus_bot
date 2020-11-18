#ifndef MOODSMILEYUPDATEMESSAGE_H
#define MOODSMILEYUPDATEMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class MoodSmileyUpdateMessage : public DeserializeInterface {
public:
    unsigned int accountId = 0;
    double playerId = 0;
    unsigned int smileyId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _accountIdFunc(CustomDataInput *input);

    void _playerIdFunc(CustomDataInput *input);

    void _smileyIdFunc(CustomDataInput *input);
};

#endif