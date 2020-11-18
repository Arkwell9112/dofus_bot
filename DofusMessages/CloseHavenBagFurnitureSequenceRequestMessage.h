#ifndef CLOSEHAVENBAGFURNITURESEQUENCEREQUESTMESSAGE_H
#define CLOSEHAVENBAGFURNITURESEQUENCEREQUESTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class CloseHavenBagFurnitureSequenceRequestMessage : public DeserializeInterface {
public:
    void deserialize(CustomDataInput *input);

private:
};

#endif