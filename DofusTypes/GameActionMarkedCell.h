#ifndef GAMEACTIONMARKEDCELL_H
#define GAMEACTIONMARKEDCELL_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GameActionMarkedCell : public DeserializeInterface {
public:
    unsigned int cellId = 0;
    int zoneSize = 0;
    int cellColor = 0;
    int cellsType = 0;

    void deserialize(CustomDataInput *input);

private:
    void _cellIdFunc(CustomDataInput *input);

    void _zoneSizeFunc(CustomDataInput *input);

    void _cellColorFunc(CustomDataInput *input);

    void _cellsTypeFunc(CustomDataInput *input);
};

#endif