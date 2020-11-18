#ifndef ALTERNATIVEMONSTERSINGROUPLIGHTINFORMATIONS_H
#define ALTERNATIVEMONSTERSINGROUPLIGHTINFORMATIONS_H

#include "MonsterInGroupLightInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class AlternativeMonstersInGroupLightInformations : public DeserializeInterface {
public:
    int playerCount = 0;
    std::vector<MonsterInGroupLightInformations> monsters;

    void deserialize(CustomDataInput *input);

private:
    void _playerCountFunc(CustomDataInput *input);
};

#endif