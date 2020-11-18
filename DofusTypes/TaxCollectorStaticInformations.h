#ifndef TAXCOLLECTORSTATICINFORMATIONS_H
#define TAXCOLLECTORSTATICINFORMATIONS_H

#include "GuildInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class TaxCollectorStaticInformations : public DeserializeInterface {
public:
    unsigned int firstNameId = 0;
    unsigned int lastNameId = 0;
    GuildInformations guildIdentity;
    double callerId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _firstNameIdFunc(CustomDataInput *input);

    void _lastNameIdFunc(CustomDataInput *input);

    void _callerIdFunc(CustomDataInput *input);
};

#endif