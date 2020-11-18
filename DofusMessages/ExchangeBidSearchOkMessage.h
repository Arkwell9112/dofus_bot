#ifndef EXCHANGEBIDSEARCHOKMESSAGE_H
#define EXCHANGEBIDSEARCHOKMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ExchangeBidSearchOkMessage : public DeserializeInterface {
public:
    void deserialize(CustomDataInput *input);

private:
};

#endif