#ifndef HAAPIAUTHERRORMESSAGE_H
#define HAAPIAUTHERRORMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class HaapiAuthErrorMessage : public DeserializeInterface {
public:
    unsigned int type = 0;

    void deserialize(CustomDataInput *input);

private:
    void _typeFunc(CustomDataInput *input);
};

#endif