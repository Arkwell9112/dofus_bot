#ifndef EXCHANGEBUYOKMESSAGE_H
#define EXCHANGEBUYOKMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ExchangeBuyOkMessage : public DeserializeInterface {
public:
    void deserialize(CustomDataInput *input);

private:
};

#endif