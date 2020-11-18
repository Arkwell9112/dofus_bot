#ifndef LOCKABLECHANGECODEMESSAGE_H
#define LOCKABLECHANGECODEMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class LockableChangeCodeMessage : public DeserializeInterface {
public:
    std::string code;

    void deserialize(CustomDataInput *input);

private:
    void _codeFunc(CustomDataInput *input);
};

#endif