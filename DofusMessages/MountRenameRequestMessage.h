#ifndef MOUNTRENAMEREQUESTMESSAGE_H
#define MOUNTRENAMEREQUESTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class MountRenameRequestMessage : public DeserializeInterface {
public:
    std::string name;
    int mountId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _nameFunc(CustomDataInput *input);

    void _mountIdFunc(CustomDataInput *input);
};

#endif