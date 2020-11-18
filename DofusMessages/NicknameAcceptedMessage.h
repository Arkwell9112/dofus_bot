#ifndef NICKNAMEACCEPTEDMESSAGE_H
#define NICKNAMEACCEPTEDMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class NicknameAcceptedMessage : public DeserializeInterface {
public:
    void deserialize(CustomDataInput *input);

private:
};

#endif