#ifndef ALREADYCONNECTEDMESSAGE_H
#define ALREADYCONNECTEDMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class AlreadyConnectedMessage : public DeserializeInterface {
public:
    void deserialize(CustomDataInput *input);

private:
};

#endif