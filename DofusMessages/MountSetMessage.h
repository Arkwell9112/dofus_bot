#ifndef MOUNTSETMESSAGE_H
#define MOUNTSETMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/MountClientData.h"

#include <string>
#include <vector>

class MountSetMessage : public DeserializeInterface {
public:
    MountClientData mountData;

    void deserialize(CustomDataInput *input);

private:
};

#endif