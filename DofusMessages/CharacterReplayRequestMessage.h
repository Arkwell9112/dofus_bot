#ifndef CHARACTERREPLAYREQUESTMESSAGE_H
#define CHARACTERREPLAYREQUESTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class CharacterReplayRequestMessage : public DeserializeInterface {
public:
    double characterId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _characterIdFunc(CustomDataInput *input);
};

#endif