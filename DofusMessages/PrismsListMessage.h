#ifndef PRISMSLISTMESSAGE_H
#define PRISMSLISTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/PrismSubareaEmptyInfo.h"

#include <string>
#include <vector>

class PrismsListMessage : public DeserializeInterface {
public:
    std::vector<PrismSubareaEmptyInfo> prisms;

    void deserialize(CustomDataInput *input);

private:
    void _prismsFunc(CustomDataInput *input);
};

#endif