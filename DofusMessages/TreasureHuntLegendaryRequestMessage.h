#ifndef TREASUREHUNTLEGENDARYREQUESTMESSAGE_H
#define TREASUREHUNTLEGENDARYREQUESTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class TreasureHuntLegendaryRequestMessage : public DeserializeInterface {
public:
    unsigned int legendaryId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _legendaryIdFunc(CustomDataInput *input);
};

#endif