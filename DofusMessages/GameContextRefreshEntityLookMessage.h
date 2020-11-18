#ifndef GAMECONTEXTREFRESHENTITYLOOKMESSAGE_H
#define GAMECONTEXTREFRESHENTITYLOOKMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/EntityLook.h"

#include <string>
#include <vector>

class GameContextRefreshEntityLookMessage : public DeserializeInterface {
public:
    double id = 0;
    EntityLook look;

    void deserialize(CustomDataInput *input);

private:
    void _idFunc(CustomDataInput *input);
};

#endif