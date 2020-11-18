#ifndef GAMECONTEXTCREATEREQUESTMESSAGE_H
#define GAMECONTEXTCREATEREQUESTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GameContextCreateRequestMessage : public DeserializeInterface {
public:
    void deserialize(CustomDataInput *input);

private:
};

#endif