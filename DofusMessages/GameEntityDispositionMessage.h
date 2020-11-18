#ifndef GAMEENTITYDISPOSITIONMESSAGE_H
#define GAMEENTITYDISPOSITIONMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/IdentifiedEntityDispositionInformations.h"

#include "../DofusTypes/EntityDispositionInformations.h"

#include <string>
#include <vector>

class GameEntityDispositionMessage : public DeserializeInterface {
public:
    IdentifiedEntityDispositionInformations disposition;

    void deserialize(CustomDataInput *input);

private:
};

#endif