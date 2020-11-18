#ifndef IDOLPARTYLOSTMESSAGE_H
#define IDOLPARTYLOSTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/Idol.h"

#include <string>
#include <vector>

class IdolPartyLostMessage : public DeserializeInterface {
public:
    unsigned int idolId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _idolIdFunc(CustomDataInput *input);
};

#endif