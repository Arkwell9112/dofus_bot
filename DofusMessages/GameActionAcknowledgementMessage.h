#ifndef GAMEACTIONACKNOWLEDGEMENTMESSAGE_H
#define GAMEACTIONACKNOWLEDGEMENTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GameActionAcknowledgementMessage : public DeserializeInterface {
public:
    bool valid = false;
    int actionId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _validFunc(CustomDataInput *input);

    void _actionIdFunc(CustomDataInput *input);
};

#endif