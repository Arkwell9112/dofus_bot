#ifndef PARTYGUESTINFORMATIONS_H
#define PARTYGUESTINFORMATIONS_H

#include "PlayerStatus.h"
#include "PartyEntityBaseInformation.h"
#include "EntityLook.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class PartyGuestInformations : public DeserializeInterface {
public:
    double guestId = 0;
    double hostId = 0;
    std::string name;
    EntityLook guestLook;
    int breed = 0;
    bool sex = false;
    PlayerStatus status;
    std::vector<PartyEntityBaseInformation> entities;

    void deserialize(CustomDataInput *input);

private:
    void _guestIdFunc(CustomDataInput *input);

    void _hostIdFunc(CustomDataInput *input);

    void _nameFunc(CustomDataInput *input);

    void _breedFunc(CustomDataInput *input);

    void _sexFunc(CustomDataInput *input);
};

#endif