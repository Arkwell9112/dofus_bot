#ifndef ALLIANCELEFTMESSAGE_H
#define ALLIANCELEFTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class AllianceLeftMessage : public DeserializeInterface {
public:
    void deserialize(CustomDataInput *input);

private:
};

#endif