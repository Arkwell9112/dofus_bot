#ifndef MOUNTDATAMESSAGE_H
#define MOUNTDATAMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/MountClientData.h"

#include <string>
#include <vector>

class MountDataMessage : public DeserializeInterface {
public:
    MountClientData mountData;

    void deserialize(CustomDataInput *input);

private:
};

#endif