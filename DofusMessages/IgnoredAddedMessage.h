#ifndef IGNOREDADDEDMESSAGE_H
#define IGNOREDADDEDMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/IgnoredInformations.h"

#include <string>
#include <vector>

class IgnoredAddedMessage : public DeserializeInterface {
public:
    IgnoredInformations ignoreAdded;
    bool session = false;

    void deserialize(CustomDataInput *input);

private:
    void _sessionFunc(CustomDataInput *input);
};

#endif