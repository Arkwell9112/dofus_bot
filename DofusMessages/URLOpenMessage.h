#ifndef URLOPENMESSAGE_H
#define URLOPENMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class URLOpenMessage : public DeserializeInterface {
public:
    unsigned int urlId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _urlIdFunc(CustomDataInput *input);
};

#endif