#ifndef WRAPPEROBJECTERRORMESSAGE_H
#define WRAPPEROBJECTERRORMESSAGE_H

#include "SymbioticObjectErrorMessage.h"
#include "ObjectErrorMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class WrapperObjectErrorMessage : public SymbioticObjectErrorMessage {
public:
    void deserialize(CustomDataInput *input);

private:
};

#endif