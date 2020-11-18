#ifndef GAMEFIGHTPLACEMENTSWAPPOSITIONSMESSAGE_H
#define GAMEFIGHTPLACEMENTSWAPPOSITIONSMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/IdentifiedEntityDispositionInformations.h"

#include "../DofusTypes/EntityDispositionInformations.h"

#include <string>
#include <vector>

class GameFightPlacementSwapPositionsMessage : public DeserializeInterface {
public:
    std::vector<IdentifiedEntityDispositionInformations> dispositions{IdentifiedEntityDispositionInformations(),
                                                                      IdentifiedEntityDispositionInformations()};

    void deserialize(CustomDataInput *input);

private:
};

#endif