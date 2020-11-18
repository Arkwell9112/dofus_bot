#ifndef LOCKABLEUSECODEMESSAGE_H
#define LOCKABLEUSECODEMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class LockableUseCodeMessage : public DeserializeInterface {
public:
    std::string code;

    void deserialize(CustomDataInput *input);

private:
    void _codeFunc(CustomDataInput *input);
};

#endif