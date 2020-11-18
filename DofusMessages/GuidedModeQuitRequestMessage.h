#ifndef GUIDEDMODEQUITREQUESTMESSAGE_H
#define GUIDEDMODEQUITREQUESTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GuidedModeQuitRequestMessage : public DeserializeInterface {
public:
    void deserialize(CustomDataInput *input);

private:
};

#endif