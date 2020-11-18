#ifndef EXCHANGECRAFTINFORMATIONOBJECTMESSAGE_H
#define EXCHANGECRAFTINFORMATIONOBJECTMESSAGE_H

#include "ExchangeCraftResultWithObjectIdMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ExchangeCraftInformationObjectMessage : public ExchangeCraftResultWithObjectIdMessage {
public:
    double playerId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _playerIdFunc(CustomDataInput *input);
};

#endif