#ifndef OPENHAVENBAGFURNITURESEQUENCEREQUESTMESSAGE_H
#define OPENHAVENBAGFURNITURESEQUENCEREQUESTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class OpenHavenBagFurnitureSequenceRequestMessage : public DeserializeInterface {
public:
    void deserialize(CustomDataInput *input);

private:
};

#endif