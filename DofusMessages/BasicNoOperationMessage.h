#ifndef BASICNOOPERATIONMESSAGE_H
#define BASICNOOPERATIONMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class BasicNoOperationMessage : public DeserializeInterface {
public:
    void deserialize(CustomDataInput *input);

private:
};

#endif