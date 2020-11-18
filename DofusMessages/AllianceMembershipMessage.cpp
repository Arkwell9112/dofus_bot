#include "AllianceMembershipMessage.h"
#include "AllianceJoinedMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void AllianceMembershipMessage::deserialize(CustomDataInput *input) {
    AllianceJoinedMessage::deserialize(input);
}