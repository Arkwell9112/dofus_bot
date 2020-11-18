#ifndef PRISMSETTINGSERRORMESSAGE_H
#define PRISMSETTINGSERRORMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class PrismSettingsErrorMessage : public DeserializeInterface {
public:
    void deserialize(CustomDataInput *input);

private:
};

#endif