#ifndef EXCHANGEMULTICRAFTCRAFTERCANUSEHISRESSOURCESMESSAGE_H
#define EXCHANGEMULTICRAFTCRAFTERCANUSEHISRESSOURCESMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ExchangeMultiCraftCrafterCanUseHisRessourcesMessage : public DeserializeInterface {
public:
    bool allowed = false;

    void deserialize(CustomDataInput *input);

private:
    void _allowedFunc(CustomDataInput *input);
};

#endif