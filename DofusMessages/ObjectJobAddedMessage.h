#ifndef OBJECTJOBADDEDMESSAGE_H
#define OBJECTJOBADDEDMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ObjectJobAddedMessage : public DeserializeInterface {
public:
    unsigned int jobId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _jobIdFunc(CustomDataInput *input);
};

#endif