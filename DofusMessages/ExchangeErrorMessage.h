#ifndef EXCHANGEERRORMESSAGE_H
#define EXCHANGEERRORMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ExchangeErrorMessage : public DeserializeInterface {
public:
    int errorType = 0;

    void deserialize(CustomDataInput *input);

private:
    void _errorTypeFunc(CustomDataInput *input);
};

#endif