#ifndef TOPTAXCOLLECTORLISTMESSAGE_H
#define TOPTAXCOLLECTORLISTMESSAGE_H

#include "TaxCollectorListMessage.h"
#include "AbstractTaxCollectorListMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class TopTaxCollectorListMessage : public AbstractTaxCollectorListMessage {
public:
    bool isDungeon = false;

    void deserialize(CustomDataInput *input);

private:
    void _isDungeonFunc(CustomDataInput *input);
};

#endif