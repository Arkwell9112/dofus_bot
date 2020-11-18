#ifndef ORNAMENTSELECTREQUESTMESSAGE_H
#define ORNAMENTSELECTREQUESTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class OrnamentSelectRequestMessage : public DeserializeInterface {
public:
    unsigned int ornamentId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _ornamentIdFunc(CustomDataInput *input);
};

#endif