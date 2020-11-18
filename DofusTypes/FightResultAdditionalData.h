#ifndef FIGHTRESULTADDITIONALDATA_H
#define FIGHTRESULTADDITIONALDATA_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class FightResultAdditionalData : public DeserializeInterface {
public:
    void deserialize(CustomDataInput *input);

private:
};

#endif