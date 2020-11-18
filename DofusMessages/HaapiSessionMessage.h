#ifndef HAAPISESSIONMESSAGE_H
#define HAAPISESSIONMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class HaapiSessionMessage : public DeserializeInterface {
public:
    std::string key;
    unsigned int type = 0;

    void deserialize(CustomDataInput *input);

private:
    void _keyFunc(CustomDataInput *input);

    void _typeFunc(CustomDataInput *input);
};

#endif