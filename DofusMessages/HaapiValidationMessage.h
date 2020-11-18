#ifndef HAAPIVALIDATIONMESSAGE_H
#define HAAPIVALIDATIONMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class HaapiValidationMessage : public DeserializeInterface {
public:
    unsigned int action = 0;
    unsigned int code = 0;

    void deserialize(CustomDataInput *input);

private:
    void _actionFunc(CustomDataInput *input);

    void _codeFunc(CustomDataInput *input);
};

#endif