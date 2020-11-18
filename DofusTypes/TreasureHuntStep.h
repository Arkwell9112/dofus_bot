#ifndef TREASUREHUNTSTEP_H
#define TREASUREHUNTSTEP_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class TreasureHuntStep : public DeserializeInterface {
public:
    void deserialize(CustomDataInput *input);

private:
};

#endif