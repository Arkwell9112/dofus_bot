#ifndef STARTUPACTIONSALLATTRIBUTIONMESSAGE_H
#define STARTUPACTIONSALLATTRIBUTIONMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class StartupActionsAllAttributionMessage : public DeserializeInterface {
public:
    double characterId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _characterIdFunc(CustomDataInput *input);
};

#endif