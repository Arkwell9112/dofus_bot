#ifndef PARTYNAMESETERRORMESSAGE_H
#define PARTYNAMESETERRORMESSAGE_H

#include "AbstractPartyMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class PartyNameSetErrorMessage : public AbstractPartyMessage {
public:
    unsigned int result = 0;

    void deserialize(CustomDataInput *input);

private:
    void _resultFunc(CustomDataInput *input);
};

#endif