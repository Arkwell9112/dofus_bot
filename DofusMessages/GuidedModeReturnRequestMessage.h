#ifndef GUIDEDMODERETURNREQUESTMESSAGE_H
#define GUIDEDMODERETURNREQUESTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GuidedModeReturnRequestMessage : public DeserializeInterface {
public:
    void deserialize(CustomDataInput *input);

private:
};

#endif