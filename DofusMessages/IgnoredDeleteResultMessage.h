#ifndef IGNOREDDELETERESULTMESSAGE_H
#define IGNOREDDELETERESULTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class IgnoredDeleteResultMessage : public DeserializeInterface {
public:
    bool success = false;
    std::string name;
    bool session = false;

    void deserialize(CustomDataInput *input);

private:
    void deserializeByteBoxes(CustomDataInput *input);

    void _nameFunc(CustomDataInput *input);
};

#endif