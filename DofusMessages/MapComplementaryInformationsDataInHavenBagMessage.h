#ifndef MAPCOMPLEMENTARYINFORMATIONSDATAINHAVENBAGMESSAGE_H
#define MAPCOMPLEMENTARYINFORMATIONSDATAINHAVENBAGMESSAGE_H

#include "MapComplementaryInformationsDataMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/CharacterMinimalInformations.h"

#include <string>
#include <vector>

class MapComplementaryInformationsDataInHavenBagMessage : public MapComplementaryInformationsDataMessage {
public:
    CharacterMinimalInformations ownerInformations;
    int theme = 0;
    unsigned int roomId = 0;
    unsigned int maxRoomId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _themeFunc(CustomDataInput *input);

    void _roomIdFunc(CustomDataInput *input);

    void _maxRoomIdFunc(CustomDataInput *input);
};

#endif