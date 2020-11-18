#ifndef ACQUAINTANCESEARCHERRORMESSAGE_H
#define ACQUAINTANCESEARCHERRORMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class AcquaintanceSearchErrorMessage : public DeserializeInterface {
public:
    unsigned int reason = 0;

    void deserialize(CustomDataInput *input);

private:
    void _reasonFunc(CustomDataInput *input);
};

#endif