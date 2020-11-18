#ifndef IDOLPARTYREGISTERREQUESTMESSAGE_H
#define IDOLPARTYREGISTERREQUESTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/Idol.h"

#include <string>
#include <vector>

class IdolPartyRegisterRequestMessage : public DeserializeInterface {
public:
    bool register0 = false;

    void deserialize(CustomDataInput *input);

private:
    void _registerFunc(CustomDataInput *input);
};

#endif