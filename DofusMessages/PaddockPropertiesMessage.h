#ifndef PADDOCKPROPERTIESMESSAGE_H
#define PADDOCKPROPERTIESMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/PaddockInstancesInformations.h"

#include <string>
#include <vector>

class PaddockPropertiesMessage : public DeserializeInterface {
public:
    PaddockInstancesInformations properties;

    void deserialize(CustomDataInput *input);

private:
};

#endif