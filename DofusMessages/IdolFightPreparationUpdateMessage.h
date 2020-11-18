#ifndef IDOLFIGHTPREPARATIONUPDATEMESSAGE_H
#define IDOLFIGHTPREPARATIONUPDATEMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/Idol.h"

#include <string>
#include <vector>

class IdolFightPreparationUpdateMessage : public DeserializeInterface {
public:
    unsigned int idolSource = 0;
    std::vector<Idol> idols;

    void deserialize(CustomDataInput *input);

private:
    void _idolSourceFunc(CustomDataInput *input);

    void _idolsFunc(CustomDataInput *input);
};

#endif