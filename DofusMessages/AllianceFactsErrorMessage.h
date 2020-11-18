#ifndef ALLIANCEFACTSERRORMESSAGE_H
#define ALLIANCEFACTSERRORMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class AllianceFactsErrorMessage : public DeserializeInterface {
public:
    unsigned int allianceId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _allianceIdFunc(CustomDataInput *input);
};

#endif