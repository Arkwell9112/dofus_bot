#ifndef CHARACTERDELETIONREQUESTMESSAGE_H
#define CHARACTERDELETIONREQUESTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class CharacterDeletionRequestMessage : public DeserializeInterface {
public:
    double characterId = 0;
    std::string secretAnswerHash;

    void deserialize(CustomDataInput *input);

private:
    void _characterIdFunc(CustomDataInput *input);

    void _secretAnswerHashFunc(CustomDataInput *input);
};

#endif