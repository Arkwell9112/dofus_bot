#ifndef BASICWHOISREQUESTMESSAGE_H
#define BASICWHOISREQUESTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class BasicWhoIsRequestMessage : public DeserializeInterface {
public:
    bool verbose = false;
    std::string search;

    void deserialize(CustomDataInput *input);

private:
    void _verboseFunc(CustomDataInput *input);

    void _searchFunc(CustomDataInput *input);
};

#endif