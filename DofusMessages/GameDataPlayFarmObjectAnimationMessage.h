#ifndef GAMEDATAPLAYFARMOBJECTANIMATIONMESSAGE_H
#define GAMEDATAPLAYFARMOBJECTANIMATIONMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GameDataPlayFarmObjectAnimationMessage : public DeserializeInterface {
public:
    std::vector<unsigned int> cellId;

    void deserialize(CustomDataInput *input);

private:
    void _cellIdFunc(CustomDataInput *input);
};

#endif