#ifndef ALLIANCEKICKREQUESTMESSAGE_H
#define ALLIANCEKICKREQUESTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class AllianceKickRequestMessage : public DeserializeInterface {
public:
    unsigned int kickedId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _kickedIdFunc(CustomDataInput *input);
};

#endif