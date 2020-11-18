#ifndef ACCESSORYPREVIEWMESSAGE_H
#define ACCESSORYPREVIEWMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/EntityLook.h"

#include <string>
#include <vector>

class AccessoryPreviewMessage : public DeserializeInterface {
public:
    EntityLook look;

    void deserialize(CustomDataInput *input);

private:
};

#endif