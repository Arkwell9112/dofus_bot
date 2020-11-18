#ifndef OBJECTAVERAGEPRICESERRORMESSAGE_H
#define OBJECTAVERAGEPRICESERRORMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ObjectAveragePricesErrorMessage : public DeserializeInterface {
public:
    void deserialize(CustomDataInput *input);

private:
};

#endif