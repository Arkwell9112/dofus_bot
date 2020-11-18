#ifndef TITLESANDORNAMENTSLISTREQUESTMESSAGE_H
#define TITLESANDORNAMENTSLISTREQUESTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class TitlesAndOrnamentsListRequestMessage : public DeserializeInterface {
public:
    void deserialize(CustomDataInput *input);

private:
};

#endif