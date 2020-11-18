#ifndef CONTACTLOOKMESSAGE_H
#define CONTACTLOOKMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/EntityLook.h"

#include <string>
#include <vector>

class ContactLookMessage : public DeserializeInterface {
public:
    unsigned int requestId = 0;
    std::string playerName;
    double playerId = 0;
    EntityLook look;

    void deserialize(CustomDataInput *input);

private:
    void _requestIdFunc(CustomDataInput *input);

    void _playerNameFunc(CustomDataInput *input);

    void _playerIdFunc(CustomDataInput *input);
};

#endif