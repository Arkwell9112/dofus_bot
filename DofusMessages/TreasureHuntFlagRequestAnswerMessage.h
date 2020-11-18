#ifndef TREASUREHUNTFLAGREQUESTANSWERMESSAGE_H
#define TREASUREHUNTFLAGREQUESTANSWERMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/TreasureHuntFlag.h"

#include <string>
#include <vector>

class TreasureHuntFlagRequestAnswerMessage : public DeserializeInterface {
public:
    unsigned int questType = 0;
    unsigned int result = 0;
    unsigned int index = 0;

    void deserialize(CustomDataInput *input);

private:
    void _questTypeFunc(CustomDataInput *input);

    void _resultFunc(CustomDataInput *input);

    void _indexFunc(CustomDataInput *input);
};

#endif