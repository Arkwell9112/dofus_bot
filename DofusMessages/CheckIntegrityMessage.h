#ifndef CHECKINTEGRITYMESSAGE_H
#define CHECKINTEGRITYMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class CheckIntegrityMessage : public DeserializeInterface {
public:
    std::vector<int> data;

    void deserialize(CustomDataInput *input);

private:
    void _dataFunc(CustomDataInput *input);
};

#endif