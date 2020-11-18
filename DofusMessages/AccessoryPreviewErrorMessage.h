#ifndef ACCESSORYPREVIEWERRORMESSAGE_H
#define ACCESSORYPREVIEWERRORMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class AccessoryPreviewErrorMessage : public DeserializeInterface {
public:
    unsigned int error = 0;

    void deserialize(CustomDataInput *input);

private:
    void _errorFunc(CustomDataInput *input);
};

#endif