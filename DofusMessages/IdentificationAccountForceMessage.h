#ifndef IDENTIFICATIONACCOUNTFORCEMESSAGE_H
#define IDENTIFICATIONACCOUNTFORCEMESSAGE_H

#include "IdentificationMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class IdentificationAccountForceMessage : public IdentificationMessage {
public:
    std::string forcedAccountLogin;

    void deserialize(CustomDataInput *input);

private:
    void _forcedAccountLoginFunc(CustomDataInput *input);
};

#endif