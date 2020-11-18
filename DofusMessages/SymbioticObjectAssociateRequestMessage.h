#ifndef SYMBIOTICOBJECTASSOCIATEREQUESTMESSAGE_H
#define SYMBIOTICOBJECTASSOCIATEREQUESTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class SymbioticObjectAssociateRequestMessage : public DeserializeInterface {
public:
    unsigned int symbioteUID = 0;
    unsigned int symbiotePos = 0;
    unsigned int hostUID = 0;
    unsigned int hostPos = 0;

    void deserialize(CustomDataInput *input);

private:
    void _symbioteUIDFunc(CustomDataInput *input);

    void _symbiotePosFunc(CustomDataInput *input);

    void _hostUIDFunc(CustomDataInput *input);

    void _hostPosFunc(CustomDataInput *input);
};

#endif