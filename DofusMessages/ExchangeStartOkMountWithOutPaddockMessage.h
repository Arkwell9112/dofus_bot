#ifndef EXCHANGESTARTOKMOUNTWITHOUTPADDOCKMESSAGE_H
#define EXCHANGESTARTOKMOUNTWITHOUTPADDOCKMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/MountClientData.h"

#include <string>
#include <vector>

class ExchangeStartOkMountWithOutPaddockMessage : public DeserializeInterface {
public:
    std::vector<MountClientData> stabledMountsDescription;

    void deserialize(CustomDataInput *input);

private:
};

#endif