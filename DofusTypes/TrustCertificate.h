#ifndef TRUSTCERTIFICATE_H
#define TRUSTCERTIFICATE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class TrustCertificate : public DeserializeInterface {
public:
    unsigned int id = 0;
    std::string hash;

    void deserialize(CustomDataInput *input);

private:
    void _idFunc(CustomDataInput *input);

    void _hashFunc(CustomDataInput *input);
};

#endif