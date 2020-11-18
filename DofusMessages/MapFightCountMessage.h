#ifndef MAPFIGHTCOUNTMESSAGE_H
#define MAPFIGHTCOUNTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class MapFightCountMessage : public DeserializeInterface {
public:
    unsigned int fightCount = 0;

    void deserialize(CustomDataInput *input);

private:
    void _fightCountFunc(CustomDataInput *input);
};

#endif