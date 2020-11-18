#include "ObjectModifiedMessage.h"
#include "ExchangeObjectModifiedMessage.h"
#include "ExchangeObjectMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ExchangeObjectModifiedMessage::deserialize(CustomDataInput *input) {
    ExchangeObjectMessage::deserialize(input);
    this->object.deserialize(input);
}