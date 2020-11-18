#ifndef LEAVEDIALOGREQUESTMESSAGE_H
#define LEAVEDIALOGREQUESTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class LeaveDialogRequestMessage : public DeserializeInterface {
public:
    void deserialize(CustomDataInput *input);

private:
};

#endif