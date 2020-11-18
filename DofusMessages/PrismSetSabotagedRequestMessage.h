#ifndef PRISMSETSABOTAGEDREQUESTMESSAGE_H
#define PRISMSETSABOTAGEDREQUESTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class PrismSetSabotagedRequestMessage : public DeserializeInterface {
public:
    unsigned int subAreaId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _subAreaIdFunc(CustomDataInput *input);
};

#endif