#ifndef GAMEFIGHTFIGHTERLIGHTINFORMATIONS_H
#define GAMEFIGHTFIGHTERLIGHTINFORMATIONS_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GameFightFighterLightInformations : public DeserializeInterface {
public:
    double id = 0;
    unsigned int wave = 0;
    unsigned int level = 0;
    int breed = 0;
    bool sex = false;
    bool alive = false;

    void deserialize(CustomDataInput *input);

private:
    void deserializeByteBoxes(CustomDataInput *input);

    void _idFunc(CustomDataInput *input);

    void _waveFunc(CustomDataInput *input);

    void _levelFunc(CustomDataInput *input);

    void _breedFunc(CustomDataInput *input);
};

#endif