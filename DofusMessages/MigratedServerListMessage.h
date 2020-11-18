#ifndef MIGRATEDSERVERLISTMESSAGE_H
#define MIGRATEDSERVERLISTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class MigratedServerListMessage : public DeserializeInterface {
public:
    std::vector<unsigned int> migratedServerIds;

    void deserialize(CustomDataInput *input);

private:
    void _migratedServerIdsFunc(CustomDataInput *input);
};

#endif