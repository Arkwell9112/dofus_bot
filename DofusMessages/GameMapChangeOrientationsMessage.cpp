#include "GameMapChangeOrientationsMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/ActorOrientation.h"

void GameMapChangeOrientationsMessage::deserialize(CustomDataInput *input) {
    ActorOrientation _item1;
    unsigned int _orientationsLen = input->readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _orientationsLen; _i1++) {
        _item1.deserialize(input);
        this->orientations.push_back(_item1);
    }
}