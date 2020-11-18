#ifndef HELLOGAMEMESSAGE_H
#define HELLOGAMEMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class HelloGameMessage : public DeserializeInterface {
public:
    void deserialize(CustomDataInput *input);

private:
};

#endif