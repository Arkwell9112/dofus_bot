#include "QuestStepInfoMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/QuestActiveInformations.h"

void QuestStepInfoMessage::deserialize(CustomDataInput *input) {
    unsigned int _id1 = input->readUnsignedShort();
    this->infos = *dynamic_cast<QuestActiveInformations *>(ProtocolTypeManager::getInstance(_id1, input));
    ProtocolTypeManager::deleteLastInstance();

}