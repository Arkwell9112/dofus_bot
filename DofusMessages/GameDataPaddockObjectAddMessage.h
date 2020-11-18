#ifndef GAMEDATAPADDOCKOBJECTADDMESSAGE_H
#define GAMEDATAPADDOCKOBJECTADDMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/PaddockItem.h"

#include "../DofusTypes/Item.h"

#include <string>
#include <vector>

class GameDataPaddockObjectAddMessage : public DeserializeInterface {
public:
    PaddockItem paddockItemDescription;

    void deserialize(CustomDataInput *input);

private:
};

#endif