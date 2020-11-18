#ifndef MOUNTRENAMEDMESSAGE_H
#define MOUNTRENAMEDMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class MountRenamedMessage : public DeserializeInterface {
public:
    int mountId = 0;
    std::string name;

    void deserialize(CustomDataInput *input);

private:
    void _mountIdFunc(CustomDataInput *input);

    void _nameFunc(CustomDataInput *input);
};

#endif