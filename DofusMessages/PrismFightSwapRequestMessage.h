#ifndef PRISMFIGHTSWAPREQUESTMESSAGE_H
#define PRISMFIGHTSWAPREQUESTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class PrismFightSwapRequestMessage : public DeserializeInterface {
public:
    unsigned int subAreaId = 0;
    double targetId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _subAreaIdFunc(CustomDataInput *input);

    void _targetIdFunc(CustomDataInput *input);
};

#endif