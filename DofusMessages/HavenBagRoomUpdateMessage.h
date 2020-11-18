#ifndef HAVENBAGROOMUPDATEMESSAGE_H
#define HAVENBAGROOMUPDATEMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/HavenBagRoomPreviewInformation.h"

#include <string>
#include <vector>

class HavenBagRoomUpdateMessage : public DeserializeInterface {
public:
    unsigned int action = 0;
    std::vector<HavenBagRoomPreviewInformation> roomsPreview;

    void deserialize(CustomDataInput *input);

private:
    void _actionFunc(CustomDataInput *input);
};

#endif