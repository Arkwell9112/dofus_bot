#ifndef TITLESELECTREQUESTMESSAGE_H
#define TITLESELECTREQUESTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class TitleSelectRequestMessage : public DeserializeInterface {
public:
    unsigned int titleId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _titleIdFunc(CustomDataInput *input);
};

#endif