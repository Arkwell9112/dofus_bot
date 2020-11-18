#ifndef GAMEACTIONFIGHTCASTONTARGETREQUESTMESSAGE_H
#define GAMEACTIONFIGHTCASTONTARGETREQUESTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GameActionFightCastOnTargetRequestMessage : public DeserializeInterface {
public:
    unsigned int spellId = 0;
    double targetId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _spellIdFunc(CustomDataInput *input);

    void _targetIdFunc(CustomDataInput *input);
};

#endif