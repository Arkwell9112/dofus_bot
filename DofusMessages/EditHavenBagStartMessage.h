#ifndef EDITHAVENBAGSTARTMESSAGE_H
#define EDITHAVENBAGSTARTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class EditHavenBagStartMessage : public DeserializeInterface {
public:
    void deserialize(CustomDataInput *input);

private:
};

#endif