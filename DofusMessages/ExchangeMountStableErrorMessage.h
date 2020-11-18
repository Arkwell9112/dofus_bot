#ifndef EXCHANGEMOUNTSTABLEERRORMESSAGE_H
#define EXCHANGEMOUNTSTABLEERRORMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ExchangeMountStableErrorMessage : public DeserializeInterface {
public:
    void deserialize(CustomDataInput *input);

private:
};

#endif