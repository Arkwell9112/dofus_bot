#ifndef CHARACTERSELECTIONWITHREMODELMESSAGE_H
#define CHARACTERSELECTIONWITHREMODELMESSAGE_H

#include "CharacterSelectionMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/RemodelingInformation.h"

#include <string>
#include <vector>

class CharacterSelectionWithRemodelMessage : public CharacterSelectionMessage {
public:
    RemodelingInformation remodel;

    void deserialize(CustomDataInput *input);

private:
};

#endif