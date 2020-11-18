#ifndef GAMEDATAPADDOCKOBJECTLISTADDMESSAGE_H
#define GAMEDATAPADDOCKOBJECTLISTADDMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/PaddockItem.h"

#include "../DofusTypes/Item.h"

#include <string>
#include <vector>

class GameDataPaddockObjectListAddMessage : public DeserializeInterface {
public:
    std::vector<PaddockItem> paddockItemDescription;

    void deserialize(CustomDataInput *input);

private:
};

#endif