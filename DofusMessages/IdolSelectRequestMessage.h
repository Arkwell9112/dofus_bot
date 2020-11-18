#ifndef IDOLSELECTREQUESTMESSAGE_H
#define IDOLSELECTREQUESTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/Idol.h"

#include <string>
#include <vector>

class IdolSelectRequestMessage : public DeserializeInterface {
public:
    unsigned int idolId = 0;
    bool activate = false;
    bool party = false;

    void deserialize(CustomDataInput *input);

private:
    void deserializeByteBoxes(CustomDataInput *input);

    void _idolIdFunc(CustomDataInput *input);
};

#endif