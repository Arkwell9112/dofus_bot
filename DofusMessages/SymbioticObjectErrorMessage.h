#ifndef SYMBIOTICOBJECTERRORMESSAGE_H
#define SYMBIOTICOBJECTERRORMESSAGE_H

#include "ObjectErrorMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class SymbioticObjectErrorMessage : public ObjectErrorMessage {
public:
    int errorCode = 0;

    void deserialize(CustomDataInput *input);

private:
    void _errorCodeFunc(CustomDataInput *input);
};

#endif