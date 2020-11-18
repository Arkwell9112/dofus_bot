#ifndef GAMEENTITYDISPOSITIONERRORMESSAGE_H
#define GAMEENTITYDISPOSITIONERRORMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GameEntityDispositionErrorMessage : public DeserializeInterface {
public:
    void deserialize(CustomDataInput *input);

private:
};

#endif