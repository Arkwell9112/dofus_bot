#ifndef TRUSTSTATUSMESSAGE_H
#define TRUSTSTATUSMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class TrustStatusMessage : public DeserializeInterface {
public:
    bool trusted = false;
    bool certified = false;

    void deserialize(CustomDataInput *input);

private:
    void deserializeByteBoxes(CustomDataInput *input);
};

#endif