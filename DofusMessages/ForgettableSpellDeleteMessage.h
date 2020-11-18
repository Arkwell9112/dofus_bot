#ifndef FORGETTABLESPELLDELETEMESSAGE_H
#define FORGETTABLESPELLDELETEMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ForgettableSpellDeleteMessage : public DeserializeInterface {
public:
    unsigned int reason = 0;
    std::vector<unsigned int> spells;

    void deserialize(CustomDataInput *input);

private:
    void _reasonFunc(CustomDataInput *input);

    void _spellsFunc(CustomDataInput *input);
};

#endif