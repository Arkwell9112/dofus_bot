#ifndef IGNOREDGETLISTMESSAGE_H
#define IGNOREDGETLISTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class IgnoredGetListMessage : public DeserializeInterface {
public:
    void deserialize(CustomDataInput *input);

private:
};

#endif