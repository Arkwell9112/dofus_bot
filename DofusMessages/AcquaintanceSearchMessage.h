#ifndef ACQUAINTANCESEARCHMESSAGE_H
#define ACQUAINTANCESEARCHMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class AcquaintanceSearchMessage : public DeserializeInterface {
public:
    std::string nickname;

    void deserialize(CustomDataInput *input);

private:
    void _nicknameFunc(CustomDataInput *input);
};

#endif