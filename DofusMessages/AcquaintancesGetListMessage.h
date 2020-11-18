#ifndef ACQUAINTANCESGETLISTMESSAGE_H
#define ACQUAINTANCESGETLISTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class AcquaintancesGetListMessage : public DeserializeInterface {
public:
    void deserialize(CustomDataInput *input);

private:
};

#endif