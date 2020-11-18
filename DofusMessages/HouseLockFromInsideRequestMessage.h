#ifndef HOUSELOCKFROMINSIDEREQUESTMESSAGE_H
#define HOUSELOCKFROMINSIDEREQUESTMESSAGE_H

#include "LockableChangeCodeMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class HouseLockFromInsideRequestMessage : public LockableChangeCodeMessage {
public:
    void deserialize(CustomDataInput *input);

private:
};

#endif