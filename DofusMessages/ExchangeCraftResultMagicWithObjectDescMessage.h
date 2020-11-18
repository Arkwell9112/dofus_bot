#ifndef EXCHANGECRAFTRESULTMAGICWITHOBJECTDESCMESSAGE_H
#define EXCHANGECRAFTRESULTMAGICWITHOBJECTDESCMESSAGE_H

#include "ExchangeCraftResultWithObjectDescMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ExchangeCraftResultMagicWithObjectDescMessage : public ExchangeCraftResultWithObjectDescMessage {
public:
    int magicPoolStatus = 0;

    void deserialize(CustomDataInput *input);

private:
    void _magicPoolStatusFunc(CustomDataInput *input);
};

#endif