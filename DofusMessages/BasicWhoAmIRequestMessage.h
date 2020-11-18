#ifndef BASICWHOAMIREQUESTMESSAGE_H
#define BASICWHOAMIREQUESTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class BasicWhoAmIRequestMessage : public DeserializeInterface {
public:
    bool verbose = false;

    void deserialize(CustomDataInput *input);

private:
    void _verboseFunc(CustomDataInput *input);
};

#endif