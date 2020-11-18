#ifndef ACQUAINTANCEINFORMATION_H
#define ACQUAINTANCEINFORMATION_H

#include "AbstractContactInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class AcquaintanceInformation : public AbstractContactInformations {
public:
    unsigned int playerState = 99;

    void deserialize(CustomDataInput *input);

private:
    void _playerStateFunc(CustomDataInput *input);
};

#endif