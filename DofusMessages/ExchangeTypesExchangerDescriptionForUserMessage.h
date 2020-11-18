#ifndef EXCHANGETYPESEXCHANGERDESCRIPTIONFORUSERMESSAGE_H
#define EXCHANGETYPESEXCHANGERDESCRIPTIONFORUSERMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ExchangeTypesExchangerDescriptionForUserMessage : public DeserializeInterface {
public:
    unsigned int objectType = 0;
    std::vector<unsigned int> typeDescription;

    void deserialize(CustomDataInput *input);

private:
    void _objectTypeFunc(CustomDataInput *input);

    void _typeDescriptionFunc(CustomDataInput *input);
};

#endif