#ifndef NICKNAMEREGISTRATIONMESSAGE_H
#define NICKNAMEREGISTRATIONMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class NicknameRegistrationMessage : public DeserializeInterface {
public:
    void deserialize(CustomDataInput *input);

private:
};

#endif