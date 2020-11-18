#ifndef CONTACTLOOKREQUESTMESSAGE_H
#define CONTACTLOOKREQUESTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ContactLookRequestMessage : public DeserializeInterface {
public:
    unsigned int requestId = 0;
    unsigned int contactType = 0;

    void deserialize(CustomDataInput *input);

private:
    void _requestIdFunc(CustomDataInput *input);

    void _contactTypeFunc(CustomDataInput *input);
};

#endif