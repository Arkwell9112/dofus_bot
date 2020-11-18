#include "ObjectAddedMessage.h"
#include "ExchangeObjectMessage.h"
#include "ExchangeObjectAddedMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ExchangeObjectAddedMessage::deserialize(CustomDataInput *input) {
    ExchangeObjectMessage::deserialize(input);
    this->object.deserialize(input);
}