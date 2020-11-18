#ifndef IDENTIFICATIONSUCCESSWITHLOGINTOKENMESSAGE_H
#define IDENTIFICATIONSUCCESSWITHLOGINTOKENMESSAGE_H

#include "IdentificationSuccessMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class IdentificationSuccessWithLoginTokenMessage : public IdentificationSuccessMessage {
public:
    std::string loginToken;

    void deserialize(CustomDataInput *input);

private:
    void _loginTokenFunc(CustomDataInput *input);
};

#endif