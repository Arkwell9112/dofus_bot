#ifndef CHARACTERFIRSTSELECTIONMESSAGE_H
#define CHARACTERFIRSTSELECTIONMESSAGE_H

#include "CharacterSelectionMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class CharacterFirstSelectionMessage : public CharacterSelectionMessage {
public:
    bool doTutorial = false;

    void deserialize(CustomDataInput *input);

private:
    void _doTutorialFunc(CustomDataInput *input);
};

#endif