#ifndef ACCOUNTCAPABILITIESMESSAGE_H
#define ACCOUNTCAPABILITIESMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class AccountCapabilitiesMessage : public DeserializeInterface {
public:
    unsigned int accountId = 0;
    bool tutorialAvailable = false;
    unsigned int breedsVisible = 0;
    unsigned int breedsAvailable = 0;
    int status = -1;
    bool canCreateNewCharacter = false;

    void deserialize(CustomDataInput *input);

private:
    void deserializeByteBoxes(CustomDataInput *input);

    void _accountIdFunc(CustomDataInput *input);

    void _breedsVisibleFunc(CustomDataInput *input);

    void _breedsAvailableFunc(CustomDataInput *input);

    void _statusFunc(CustomDataInput *input);
};

#endif