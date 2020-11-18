#ifndef EXCHANGESTARTOKMOUNTMESSAGE_H
#define EXCHANGESTARTOKMOUNTMESSAGE_H

#include "ExchangeStartOkMountWithOutPaddockMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/MountClientData.h"

#include <string>
#include <vector>

class ExchangeStartOkMountMessage : public ExchangeStartOkMountWithOutPaddockMessage {
public:
    std::vector<MountClientData> paddockedMountsDescription;

    void deserialize(CustomDataInput *input);

private:
};

#endif