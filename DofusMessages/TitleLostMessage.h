#ifndef TITLELOSTMESSAGE_H
#define TITLELOSTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class TitleLostMessage : public DeserializeInterface {
public:
    unsigned int titleId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _titleIdFunc(CustomDataInput *input);
};

#endif