#ifndef INTERACTIVEUSEREQUESTMESSAGE_H
#define INTERACTIVEUSEREQUESTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class InteractiveUseRequestMessage : public DeserializeInterface {
public:
    unsigned int elemId = 0;
    unsigned int skillInstanceUid = 0;

    void deserialize(CustomDataInput *input);

private:
    void _elemIdFunc(CustomDataInput *input);

    void _skillInstanceUidFunc(CustomDataInput *input);
};

#endif