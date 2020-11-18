#ifndef WRAPPEROBJECTDISSOCIATEREQUESTMESSAGE_H
#define WRAPPEROBJECTDISSOCIATEREQUESTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class WrapperObjectDissociateRequestMessage : public DeserializeInterface {
public:
    unsigned int hostUID = 0;
    unsigned int hostPos = 0;

    void deserialize(CustomDataInput *input);

private:
    void _hostUIDFunc(CustomDataInput *input);

    void _hostPosFunc(CustomDataInput *input);
};

#endif