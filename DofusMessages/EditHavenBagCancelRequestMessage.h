#ifndef EDITHAVENBAGCANCELREQUESTMESSAGE_H
#define EDITHAVENBAGCANCELREQUESTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class EditHavenBagCancelRequestMessage : public DeserializeInterface {
public:
    void deserialize(CustomDataInput *input);

private:
};

#endif