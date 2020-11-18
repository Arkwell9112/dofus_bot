#ifndef HAVENBAGROOMPREVIEWINFORMATION_H
#define HAVENBAGROOMPREVIEWINFORMATION_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class HavenBagRoomPreviewInformation : public DeserializeInterface {
public:
    unsigned int roomId = 0;
    int themeId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _roomIdFunc(CustomDataInput *input);

    void _themeIdFunc(CustomDataInput *input);
};

#endif