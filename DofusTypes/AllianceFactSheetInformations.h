#ifndef ALLIANCEFACTSHEETINFORMATIONS_H
#define ALLIANCEFACTSHEETINFORMATIONS_H

#include "AllianceInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class AllianceFactSheetInformations : public AllianceInformations {
public:
    unsigned int creationDate = 0;

    void deserialize(CustomDataInput *input);

private:
    void _creationDateFunc(CustomDataInput *input);
};

#endif