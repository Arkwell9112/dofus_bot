#ifndef IDENTIFICATIONSUCCESSMESSAGE_H
#define IDENTIFICATIONSUCCESSMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class IdentificationSuccessMessage : public DeserializeInterface {
public:
    std::string login;
    std::string nickname;
    unsigned int accountId = 0;
    unsigned int communityId = 0;
    bool hasRights = false;
    bool hasConsoleRight = false;
    std::string secretQuestion;
    double accountCreation = 0;
    double subscriptionElapsedDuration = 0;
    double subscriptionEndDate = 0;
    bool wasAlreadyConnected = false;
    unsigned int havenbagAvailableRoom = 0;

    void deserialize(CustomDataInput *input);

private:
    void deserializeByteBoxes(CustomDataInput *input);

    void _loginFunc(CustomDataInput *input);

    void _nicknameFunc(CustomDataInput *input);

    void _accountIdFunc(CustomDataInput *input);

    void _communityIdFunc(CustomDataInput *input);

    void _secretQuestionFunc(CustomDataInput *input);

    void _accountCreationFunc(CustomDataInput *input);

    void _subscriptionElapsedDurationFunc(CustomDataInput *input);

    void _subscriptionEndDateFunc(CustomDataInput *input);

    void _havenbagAvailableRoomFunc(CustomDataInput *input);
};

#endif