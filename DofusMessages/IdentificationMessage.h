#ifndef IDENTIFICATIONMESSAGE_H
#define IDENTIFICATIONMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/Version.h"

#include <string>
#include <vector>

class IdentificationMessage : public DeserializeInterface {
public:
    Version version;
    std::string lang;
    std::vector<int> credentials;
    int serverId = 0;
    bool autoconnect = false;
    bool useCertificate = false;
    bool useLoginToken = false;
    double sessionOptionalSalt = 0;
    std::vector<unsigned int> failedAttempts;

    void deserialize(CustomDataInput *input);

private:
    void deserializeByteBoxes(CustomDataInput *input);

    void _langFunc(CustomDataInput *input);

    void _credentialsFunc(CustomDataInput *input);

    void _serverIdFunc(CustomDataInput *input);

    void _sessionOptionalSaltFunc(CustomDataInput *input);

    void _failedAttemptsFunc(CustomDataInput *input);
};

#endif