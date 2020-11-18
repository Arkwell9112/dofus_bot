#ifndef EXCHANGESTARTEDWITHPODSMESSAGE_H
#define EXCHANGESTARTEDWITHPODSMESSAGE_H

#include "ExchangeStartedMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ExchangeStartedWithPodsMessage : public ExchangeStartedMessage {
public:
    double firstCharacterId = 0;
    unsigned int firstCharacterCurrentWeight = 0;
    unsigned int firstCharacterMaxWeight = 0;
    double secondCharacterId = 0;
    unsigned int secondCharacterCurrentWeight = 0;
    unsigned int secondCharacterMaxWeight = 0;

    void deserialize(CustomDataInput *input);

private:
    void _firstCharacterIdFunc(CustomDataInput *input);

    void _firstCharacterCurrentWeightFunc(CustomDataInput *input);

    void _firstCharacterMaxWeightFunc(CustomDataInput *input);

    void _secondCharacterIdFunc(CustomDataInput *input);

    void _secondCharacterCurrentWeightFunc(CustomDataInput *input);

    void _secondCharacterMaxWeightFunc(CustomDataInput *input);
};

#endif