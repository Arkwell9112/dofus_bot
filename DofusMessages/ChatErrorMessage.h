#ifndef CHATERRORMESSAGE_H
#define CHATERRORMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ChatErrorMessage : public DeserializeInterface {
public:
    unsigned int reason = 0;

    void deserialize(CustomDataInput *input);

private:
    void _reasonFunc(CustomDataInput *input);
};

#endif