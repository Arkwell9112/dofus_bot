#ifndef ANOMALYSUBAREAINFORMATIONRESPONSEMESSAGE_H
#define ANOMALYSUBAREAINFORMATIONRESPONSEMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/AnomalySubareaInformation.h"

#include <string>
#include <vector>

class AnomalySubareaInformationResponseMessage : public DeserializeInterface {
public:
    std::vector<AnomalySubareaInformation> subareas;

    void deserialize(CustomDataInput *input);

private:
};

#endif