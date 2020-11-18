#ifndef WRAPPEROBJECTASSOCIATEDMESSAGE_H
#define WRAPPEROBJECTASSOCIATEDMESSAGE_H

#include "SymbioticObjectAssociatedMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class WrapperObjectAssociatedMessage : public SymbioticObjectAssociatedMessage {
public:
    void deserialize(CustomDataInput *input);

private:
};

#endif