#ifndef EDITHAVENBAGFINISHEDMESSAGE_H
#define EDITHAVENBAGFINISHEDMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class EditHavenBagFinishedMessage : public DeserializeInterface {
public:
    void deserialize(CustomDataInput *input);

private:
};

#endif