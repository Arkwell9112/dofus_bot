#ifndef ZAAPRESPAWNSAVEREQUESTMESSAGE_H
#define ZAAPRESPAWNSAVEREQUESTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ZaapRespawnSaveRequestMessage : public DeserializeInterface {
public:
    void deserialize(CustomDataInput *input);

private:
};

#endif