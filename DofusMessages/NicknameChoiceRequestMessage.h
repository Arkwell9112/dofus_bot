#ifndef NICKNAMECHOICEREQUESTMESSAGE_H
#define NICKNAMECHOICEREQUESTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class NicknameChoiceRequestMessage : public DeserializeInterface {
public:
    std::string nickname;

    void deserialize(CustomDataInput *input);

private:
    void _nicknameFunc(CustomDataInput *input);
};

#endif