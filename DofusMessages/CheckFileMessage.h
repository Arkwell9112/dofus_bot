#ifndef CHECKFILEMESSAGE_H
#define CHECKFILEMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class CheckFileMessage : public DeserializeInterface {
public:
    std::string filenameHash;
    unsigned int type = 0;
    std::string value;

    void deserialize(CustomDataInput *input);

private:
    void _filenameHashFunc(CustomDataInput *input);

    void _typeFunc(CustomDataInput *input);

    void _valueFunc(CustomDataInput *input);
};

#endif