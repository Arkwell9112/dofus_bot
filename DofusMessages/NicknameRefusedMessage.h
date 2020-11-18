#ifndef NICKNAMEREFUSEDMESSAGE_H
#define NICKNAMEREFUSEDMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class NicknameRefusedMessage : public DeserializeInterface {
public:
    unsigned int reason = 99;

    void deserialize(CustomDataInput *input);

private:
    void _reasonFunc(CustomDataInput *input);
};

#endif