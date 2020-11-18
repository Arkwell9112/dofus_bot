#include "HavenBagPermissionsUpdateMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void HavenBagPermissionsUpdateMessage::deserialize(CustomDataInput *input) {
    this->_permissionsFunc(input);
}

void HavenBagPermissionsUpdateMessage::_permissionsFunc(CustomDataInput *input) {
    this->permissions = input->readInt();
    if (this->permissions < 0) {

    }
}
