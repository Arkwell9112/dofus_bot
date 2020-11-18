#ifndef ALLIANCEFACTSREQUESTMESSAGE_H
#define ALLIANCEFACTSREQUESTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class AllianceFactsRequestMessage : public DeserializeInterface {
public:
    unsigned int allianceId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _allianceIdFunc(CustomDataInput *input);
};

#endif