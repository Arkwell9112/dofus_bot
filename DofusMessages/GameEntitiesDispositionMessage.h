#ifndef GAMEENTITIESDISPOSITIONMESSAGE_H
#define GAMEENTITIESDISPOSITIONMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/IdentifiedEntityDispositionInformations.h"

#include "../DofusTypes/EntityDispositionInformations.h"

#include <string>
#include <vector>

class GameEntitiesDispositionMessage : public DeserializeInterface {
public:
    std::vector<IdentifiedEntityDispositionInformations> dispositions;

    void deserialize(CustomDataInput *input);

private:
};

#endif