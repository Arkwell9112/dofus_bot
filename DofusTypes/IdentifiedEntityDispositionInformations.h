#ifndef IDENTIFIEDENTITYDISPOSITIONINFORMATIONS_H
#define IDENTIFIEDENTITYDISPOSITIONINFORMATIONS_H

#include "EntityDispositionInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class IdentifiedEntityDispositionInformations : public EntityDispositionInformations {
public:
    double id = 0;

    void deserialize(CustomDataInput *input);

private:
    void _idFunc(CustomDataInput *input);
};

#endif