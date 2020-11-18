#ifndef ACCESSORYPREVIEWREQUESTMESSAGE_H
#define ACCESSORYPREVIEWREQUESTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class AccessoryPreviewRequestMessage : public DeserializeInterface {
public:
    std::vector<unsigned int> genericId;

    void deserialize(CustomDataInput *input);

private:
    void _genericIdFunc(CustomDataInput *input);
};

#endif