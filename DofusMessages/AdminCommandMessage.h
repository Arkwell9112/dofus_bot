#ifndef ADMINCOMMANDMESSAGE_H
#define ADMINCOMMANDMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class AdminCommandMessage : public DeserializeInterface {
public:
    std::string content;

    void deserialize(CustomDataInput *input);

private:
    void _contentFunc(CustomDataInput *input);
};

#endif