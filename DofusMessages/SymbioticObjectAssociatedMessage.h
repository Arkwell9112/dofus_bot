#ifndef SYMBIOTICOBJECTASSOCIATEDMESSAGE_H
#define SYMBIOTICOBJECTASSOCIATEDMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class SymbioticObjectAssociatedMessage : public DeserializeInterface {
public:
    unsigned int hostUID = 0;

    void deserialize(CustomDataInput *input);

private:
    void _hostUIDFunc(CustomDataInput *input);
};

#endif