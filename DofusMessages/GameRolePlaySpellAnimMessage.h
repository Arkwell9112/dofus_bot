#ifndef GAMEROLEPLAYSPELLANIMMESSAGE_H
#define GAMEROLEPLAYSPELLANIMMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GameRolePlaySpellAnimMessage : public DeserializeInterface {
public:
    double casterId = 0;
    unsigned int targetCellId = 0;
    unsigned int spellId = 0;
    int spellLevel = 0;

    void deserialize(CustomDataInput *input);

private:
    void _casterIdFunc(CustomDataInput *input);

    void _targetCellIdFunc(CustomDataInput *input);

    void _spellIdFunc(CustomDataInput *input);

    void _spellLevelFunc(CustomDataInput *input);
};

#endif