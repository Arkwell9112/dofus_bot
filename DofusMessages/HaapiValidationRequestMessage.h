#ifndef HAAPIVALIDATIONREQUESTMESSAGE_H
#define HAAPIVALIDATIONREQUESTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class HaapiValidationRequestMessage : public DeserializeInterface {
public:
    std::string transaction;

    void deserialize(CustomDataInput *input);

private:
    void _transactionFunc(CustomDataInput *input);
};

#endif