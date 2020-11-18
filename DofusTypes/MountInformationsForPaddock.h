#ifndef MOUNTINFORMATIONSFORPADDOCK_H
#define MOUNTINFORMATIONSFORPADDOCK_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class MountInformationsForPaddock : public DeserializeInterface {
public:
    unsigned int modelId = 0;
    std::string name;
    std::string ownerName;

    void deserialize(CustomDataInput *input);

private:
    void _modelIdFunc(CustomDataInput *input);

    void _nameFunc(CustomDataInput *input);

    void _ownerNameFunc(CustomDataInput *input);
};

#endif