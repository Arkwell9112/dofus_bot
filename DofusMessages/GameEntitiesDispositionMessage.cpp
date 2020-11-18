#include "GameEntitiesDispositionMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/IdentifiedEntityDispositionInformations.h"

#include "../DofusTypes/EntityDispositionInformations.h"

void GameEntitiesDispositionMessage::deserialize(CustomDataInput *input) {
    IdentifiedEntityDispositionInformations _item1;
    unsigned int _dispositionsLen = input->readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _dispositionsLen; _i1++) {
        _item1.deserialize(input);
        this->dispositions.push_back(_item1);
    }
}