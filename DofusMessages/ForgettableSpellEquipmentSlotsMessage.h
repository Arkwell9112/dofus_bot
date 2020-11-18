#ifndef FORGETTABLESPELLEQUIPMENTSLOTSMESSAGE_H
#define FORGETTABLESPELLEQUIPMENTSLOTSMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ForgettableSpellEquipmentSlotsMessage : public DeserializeInterface {
public:
    int quantity = 0;

    void deserialize(CustomDataInput *input);

private:
    void _quantityFunc(CustomDataInput *input);
};

#endif