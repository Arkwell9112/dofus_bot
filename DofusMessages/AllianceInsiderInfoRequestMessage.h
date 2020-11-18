#ifndef ALLIANCEINSIDERINFOREQUESTMESSAGE_H
#define ALLIANCEINSIDERINFOREQUESTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class AllianceInsiderInfoRequestMessage : public DeserializeInterface {
public:
    void deserialize(CustomDataInput *input);

private:
};

#endif