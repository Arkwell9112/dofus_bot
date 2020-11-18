#ifndef PLAYERSTATUS_H
#define PLAYERSTATUS_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class PlayerStatus : public DeserializeInterface {
public:
    unsigned int statusId = 1;

    void deserialize(CustomDataInput *input);

private:
    void _statusIdFunc(CustomDataInput *input);
};

#endif