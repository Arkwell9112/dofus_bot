#ifndef FRIENDSPOUSEONLINEINFORMATIONS_H
#define FRIENDSPOUSEONLINEINFORMATIONS_H

#include "FriendSpouseInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class FriendSpouseOnlineInformations : public FriendSpouseInformations {
public:
    double mapId = 0;
    unsigned int subAreaId = 0;
    bool inFight = false;
    bool followSpouse = false;

    void deserialize(CustomDataInput *input);

private:
    void deserializeByteBoxes(CustomDataInput *input);

    void _mapIdFunc(CustomDataInput *input);

    void _subAreaIdFunc(CustomDataInput *input);
};

#endif