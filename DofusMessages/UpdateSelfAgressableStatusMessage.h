#ifndef UPDATESELFAGRESSABLESTATUSMESSAGE_H
#define UPDATESELFAGRESSABLESTATUSMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class UpdateSelfAgressableStatusMessage : public DeserializeInterface {
public:
    unsigned int status = 0;
    unsigned int probationTime = 0;

    void deserialize(CustomDataInput *input);

private:
    void _statusFunc(CustomDataInput *input);

    void _probationTimeFunc(CustomDataInput *input);
};

#endif