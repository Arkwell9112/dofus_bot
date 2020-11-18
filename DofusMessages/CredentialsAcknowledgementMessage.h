#ifndef CREDENTIALSACKNOWLEDGEMENTMESSAGE_H
#define CREDENTIALSACKNOWLEDGEMENTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class CredentialsAcknowledgementMessage : public DeserializeInterface {
public:
    void deserialize(CustomDataInput *input);

private:
};

#endif