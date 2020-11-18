#ifndef SPAWNINFORMATION_H
#define SPAWNINFORMATION_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class SpawnInformation : public DeserializeInterface {
public:
    void deserialize(CustomDataInput *input);

private:
};

#endif