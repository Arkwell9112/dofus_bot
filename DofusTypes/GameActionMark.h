#ifndef GAMEACTIONMARK_H
#define GAMEACTIONMARK_H

#include "GameActionMarkedCell.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GameActionMark : public DeserializeInterface {
public:
    double markAuthorId = 0;
    unsigned int markTeamId = 2;
    unsigned int markSpellId = 0;
    int markSpellLevel = 0;
    int markId = 0;
    int markType = 0;
    int markimpactCell = 0;
    std::vector<GameActionMarkedCell> cells;
    bool active = false;

    void deserialize(CustomDataInput *input);

private:
    void _markAuthorIdFunc(CustomDataInput *input);

    void _markTeamIdFunc(CustomDataInput *input);

    void _markSpellIdFunc(CustomDataInput *input);

    void _markSpellLevelFunc(CustomDataInput *input);

    void _markIdFunc(CustomDataInput *input);

    void _markTypeFunc(CustomDataInput *input);

    void _markimpactCellFunc(CustomDataInput *input);

    void _activeFunc(CustomDataInput *input);
};

#endif