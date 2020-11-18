#ifndef GAMEACTIONFIGHTACTIVATEGLYPHTRAPMESSAGE_H
#define GAMEACTIONFIGHTACTIVATEGLYPHTRAPMESSAGE_H

#include "AbstractGameActionMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GameActionFightActivateGlyphTrapMessage : public AbstractGameActionMessage {
public:
    int markId = 0;
    bool active = false;

    void deserialize(CustomDataInput *input);

private:
    void _markIdFunc(CustomDataInput *input);

    void _activeFunc(CustomDataInput *input);
};

#endif