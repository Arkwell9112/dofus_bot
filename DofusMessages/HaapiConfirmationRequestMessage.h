#ifndef HAAPICONFIRMATIONREQUESTMESSAGE_H
#define HAAPICONFIRMATIONREQUESTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class HaapiConfirmationRequestMessage : public DeserializeInterface {
public:
    double kamas = 0;
    double ogrines = 0;
    unsigned int rate = 0;
    unsigned int action = 0;

    void deserialize(CustomDataInput *input);

private:
    void _kamasFunc(CustomDataInput *input);

    void _ogrinesFunc(CustomDataInput *input);

    void _rateFunc(CustomDataInput *input);

    void _actionFunc(CustomDataInput *input);
};

#endif