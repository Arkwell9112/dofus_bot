#ifndef RESETCHARACTERSTATSREQUESTMESSAGE_H
#define RESETCHARACTERSTATSREQUESTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ResetCharacterStatsRequestMessage : public DeserializeInterface {
public:
    void deserialize(CustomDataInput *input);

private:
};

#endif