#ifndef PRISMSUBAREAEMPTYINFO_H
#define PRISMSUBAREAEMPTYINFO_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class PrismSubareaEmptyInfo : public DeserializeInterface {
public:
    unsigned int subAreaId = 0;
    unsigned int allianceId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _subAreaIdFunc(CustomDataInput *input);

    void _allianceIdFunc(CustomDataInput *input);
};

#endif