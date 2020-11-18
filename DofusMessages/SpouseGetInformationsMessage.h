#ifndef SPOUSEGETINFORMATIONSMESSAGE_H
#define SPOUSEGETINFORMATIONSMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class SpouseGetInformationsMessage : public DeserializeInterface {
public:
    void deserialize(CustomDataInput *input);

private:
};

#endif