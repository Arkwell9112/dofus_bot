#ifndef IDOLSELECTERRORMESSAGE_H
#define IDOLSELECTERRORMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/Idol.h"

#include <string>
#include <vector>

class IdolSelectErrorMessage : public DeserializeInterface {
public:
    unsigned int reason = 0;
    unsigned int idolId = 0;
    bool activate = false;
    bool party = false;

    void deserialize(CustomDataInput *input);

private:
    void deserializeByteBoxes(CustomDataInput *input);

    void _reasonFunc(CustomDataInput *input);

    void _idolIdFunc(CustomDataInput *input);
};

#endif