#ifndef AREAFIGHTMODIFICATORUPDATEMESSAGE_H
#define AREAFIGHTMODIFICATORUPDATEMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class AreaFightModificatorUpdateMessage : public DeserializeInterface {
public:
    int spellPairId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _spellPairIdFunc(CustomDataInput *input);
};

#endif