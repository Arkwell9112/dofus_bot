#ifndef SHOWCELLREQUESTMESSAGE_H
#define SHOWCELLREQUESTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ShowCellRequestMessage : public DeserializeInterface {
public:
    unsigned int cellId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _cellIdFunc(CustomDataInput *input);
};

#endif