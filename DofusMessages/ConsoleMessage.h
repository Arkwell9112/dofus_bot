#ifndef CONSOLEMESSAGE_H
#define CONSOLEMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ConsoleMessage : public DeserializeInterface {
public:
    unsigned int type = 0;
    std::string content;

    void deserialize(CustomDataInput *input);

private:
    void _typeFunc(CustomDataInput *input);

    void _contentFunc(CustomDataInput *input);
};

#endif