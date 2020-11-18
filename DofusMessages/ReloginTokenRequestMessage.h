#ifndef RELOGINTOKENREQUESTMESSAGE_H
#define RELOGINTOKENREQUESTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ReloginTokenRequestMessage : public DeserializeInterface {
public:
    void deserialize(CustomDataInput *input);

private:
};

#endif