#ifndef ANOMALYSUBAREAINFORMATIONREQUESTMESSAGE_H
#define ANOMALYSUBAREAINFORMATIONREQUESTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/AnomalySubareaInformation.h"

#include <string>
#include <vector>

class AnomalySubareaInformationRequestMessage : public DeserializeInterface {
public:
    void deserialize(CustomDataInput *input);

private:
};

#endif