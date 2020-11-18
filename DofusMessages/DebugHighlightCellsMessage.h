#ifndef DEBUGHIGHLIGHTCELLSMESSAGE_H
#define DEBUGHIGHLIGHTCELLSMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class DebugHighlightCellsMessage : public DeserializeInterface {
public:
    double color = 0;
    std::vector<unsigned int> cells;

    void deserialize(CustomDataInput *input);

private:
    void _colorFunc(CustomDataInput *input);

    void _cellsFunc(CustomDataInput *input);
};

#endif