#ifndef TITLESANDORNAMENTSLISTMESSAGE_H
#define TITLESANDORNAMENTSLISTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class TitlesAndOrnamentsListMessage : public DeserializeInterface {
public:
    std::vector<unsigned int> titles;
    std::vector<unsigned int> ornaments;
    unsigned int activeTitle = 0;
    unsigned int activeOrnament = 0;

    void deserialize(CustomDataInput *input);

private:
    void _titlesFunc(CustomDataInput *input);

    void _ornamentsFunc(CustomDataInput *input);

    void _activeTitleFunc(CustomDataInput *input);

    void _activeOrnamentFunc(CustomDataInput *input);
};

#endif