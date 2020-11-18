#ifndef GUILDEMBLEM_H
#define GUILDEMBLEM_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GuildEmblem : public DeserializeInterface {
public:
    unsigned int symbolShape = 0;
    int symbolColor = 0;
    unsigned int backgroundShape = 0;
    int backgroundColor = 0;

    void deserialize(CustomDataInput *input);

private:
    void _symbolShapeFunc(CustomDataInput *input);

    void _symbolColorFunc(CustomDataInput *input);

    void _backgroundShapeFunc(CustomDataInput *input);

    void _backgroundColorFunc(CustomDataInput *input);
};

#endif