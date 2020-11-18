#include "PartyUpdateMessage.h"
#include "AbstractPartyEventMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/PartyMemberInformations.h"

void PartyUpdateMessage::deserialize(CustomDataInput *input) {
    AbstractPartyEventMessage::deserialize(input);
    unsigned int _id1 = input->readUnsignedShort();
    this->memberInformations = *dynamic_cast<PartyMemberInformations *>(ProtocolTypeManager::getInstance(_id1, input));
    ProtocolTypeManager::deleteLastInstance();

}