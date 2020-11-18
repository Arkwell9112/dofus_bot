#ifndef CONSOLECOMMANDSLISTMESSAGE_H
#define CONSOLECOMMANDSLISTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ConsoleCommandsListMessage : public DeserializeInterface {
public:
    std::vector<std::string> aliases;
    std::vector<std::string> args;
    std::vector<std::string> descriptions;

    void deserialize(CustomDataInput *input);

private:
    void _aliasesFunc(CustomDataInput *input);

    void _argsFunc(CustomDataInput *input);

    void _descriptionsFunc(CustomDataInput *input);
};

#endif