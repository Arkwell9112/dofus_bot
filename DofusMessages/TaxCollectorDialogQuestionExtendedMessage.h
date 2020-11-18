#ifndef TAXCOLLECTORDIALOGQUESTIONEXTENDEDMESSAGE_H
#define TAXCOLLECTORDIALOGQUESTIONEXTENDEDMESSAGE_H

#include "TaxCollectorDialogQuestionBasicMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class TaxCollectorDialogQuestionExtendedMessage : public TaxCollectorDialogQuestionBasicMessage {
public:
    unsigned int maxPods = 0;
    unsigned int prospecting = 0;
    unsigned int wisdom = 0;
    unsigned int taxCollectorsCount = 0;
    int taxCollectorAttack = 0;
    double kamas = 0;
    double experience = 0;
    unsigned int pods = 0;
    double itemsValue = 0;

    void deserialize(CustomDataInput *input);

private:
    void _maxPodsFunc(CustomDataInput *input);

    void _prospectingFunc(CustomDataInput *input);

    void _wisdomFunc(CustomDataInput *input);

    void _taxCollectorsCountFunc(CustomDataInput *input);

    void _taxCollectorAttackFunc(CustomDataInput *input);

    void _kamasFunc(CustomDataInput *input);

    void _experienceFunc(CustomDataInput *input);

    void _podsFunc(CustomDataInput *input);

    void _itemsValueFunc(CustomDataInput *input);
};

#endif