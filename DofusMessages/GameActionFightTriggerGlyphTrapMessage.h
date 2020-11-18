#ifndef GAMEACTIONFIGHTTRIGGERGLYPHTRAPMESSAGE_H
#define GAMEACTIONFIGHTTRIGGERGLYPHTRAPMESSAGE_H

#include "AbstractGameActionMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GameActionFightTriggerGlyphTrapMessage : public AbstractGameActionMessage {
public:
    int markId = 0;
    unsigned int markImpactCell = 0;
    double triggeringCharacterId = 0;
    unsigned int triggeredSpellId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _markIdFunc(CustomDataInput *input);

    void _markImpactCellFunc(CustomDataInput *input);

    void _triggeringCharacterIdFunc(CustomDataInput *input);

    void _triggeredSpellIdFunc(CustomDataInput *input);
};

#endif