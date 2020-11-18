#ifndef EXCHANGEMOUNTSPADDOCKADDMESSAGE_H
#define EXCHANGEMOUNTSPADDOCKADDMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/MountClientData.h"

#include <string>
#include <vector>

class ExchangeMountsPaddockAddMessage : public DeserializeInterface {
public:
    std::vector<MountClientData> mountDescription;

    void deserialize(CustomDataInput *input);

private:
};

#endif