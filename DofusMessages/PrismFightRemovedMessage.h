#ifndef PRISMFIGHTREMOVEDMESSAGE_H
#define PRISMFIGHTREMOVEDMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class PrismFightRemovedMessage : public DeserializeInterface {
public:
    unsigned int subAreaId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _subAreaIdFunc(CustomDataInput *input);
};

#endif