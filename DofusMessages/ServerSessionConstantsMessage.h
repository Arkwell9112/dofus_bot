#ifndef SERVERSESSIONCONSTANTSMESSAGE_H
#define SERVERSESSIONCONSTANTSMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/ServerSessionConstant.h"

#include <string>
#include <vector>

class ServerSessionConstantsMessage : public DeserializeInterface {
public:
    std::vector<ServerSessionConstant> variables;

    void deserialize(CustomDataInput *input);

private:
    void _variablesFunc(CustomDataInput *input);
};

#endif