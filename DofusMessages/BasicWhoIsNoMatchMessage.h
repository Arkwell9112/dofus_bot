#ifndef BASICWHOISNOMATCHMESSAGE_H
#define BASICWHOISNOMATCHMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class BasicWhoIsNoMatchMessage : public DeserializeInterface {
public:
    std::string search;

    void deserialize(CustomDataInput *input);

private:
    void _searchFunc(CustomDataInput *input);
};

#endif