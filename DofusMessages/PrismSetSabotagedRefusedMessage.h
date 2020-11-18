#ifndef PRISMSETSABOTAGEDREFUSEDMESSAGE_H
#define PRISMSETSABOTAGEDREFUSEDMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class PrismSetSabotagedRefusedMessage : public DeserializeInterface {
public:
    unsigned int subAreaId = 0;
    int reason = 0;

    void deserialize(CustomDataInput *input);

private:
    void _subAreaIdFunc(CustomDataInput *input);

    void _reasonFunc(CustomDataInput *input);
};

#endif