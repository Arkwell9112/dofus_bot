#ifndef DUNGEONKEYRINGMESSAGE_H
#define DUNGEONKEYRINGMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class DungeonKeyRingMessage : public DeserializeInterface {
public:
    std::vector<unsigned int> availables;
    std::vector<unsigned int> unavailables;

    void deserialize(CustomDataInput *input);

private:
    void _availablesFunc(CustomDataInput *input);

    void _unavailablesFunc(CustomDataInput *input);
};

#endif