#ifndef FORGETTABLESPELLCLIENTACTIONMESSAGE_H
#define FORGETTABLESPELLCLIENTACTIONMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ForgettableSpellClientActionMessage : public DeserializeInterface {
public:
    unsigned int spellId = 0;
    unsigned int action = 0;

    void deserialize(CustomDataInput *input);

private:
    void _spellIdFunc(CustomDataInput *input);

    void _actionFunc(CustomDataInput *input);
};

#endif