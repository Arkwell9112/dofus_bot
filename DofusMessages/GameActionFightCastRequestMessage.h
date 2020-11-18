#ifndef GAMEACTIONFIGHTCASTREQUESTMESSAGE_H
#define GAMEACTIONFIGHTCASTREQUESTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GameActionFightCastRequestMessage : public DeserializeInterface {
public:
    unsigned int spellId = 0;
    int cellId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _spellIdFunc(CustomDataInput *input);

    void _cellIdFunc(CustomDataInput *input);
};

#endif