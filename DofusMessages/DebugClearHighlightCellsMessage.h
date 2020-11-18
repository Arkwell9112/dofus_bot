#ifndef DEBUGCLEARHIGHLIGHTCELLSMESSAGE_H
#define DEBUGCLEARHIGHLIGHTCELLSMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class DebugClearHighlightCellsMessage : public DeserializeInterface {
public:
    void deserialize(CustomDataInput *input);

private:
};

#endif