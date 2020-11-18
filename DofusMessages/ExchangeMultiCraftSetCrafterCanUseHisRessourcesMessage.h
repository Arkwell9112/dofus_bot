#ifndef EXCHANGEMULTICRAFTSETCRAFTERCANUSEHISRESSOURCESMESSAGE_H
#define EXCHANGEMULTICRAFTSETCRAFTERCANUSEHISRESSOURCESMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ExchangeMultiCraftSetCrafterCanUseHisRessourcesMessage : public DeserializeInterface {
public:
    bool allow = false;

    void deserialize(CustomDataInput *input);

private:
    void _allowFunc(CustomDataInput *input);
};

#endif