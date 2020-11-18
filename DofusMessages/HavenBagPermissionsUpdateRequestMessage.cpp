#include "HavenBagPermissionsUpdateRequestMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void HavenBagPermissionsUpdateRequestMessage::deserialize(CustomDataInput *input) {
    this->_permissionsFunc(input);
}

void HavenBagPermissionsUpdateRequestMessage::_permissionsFunc(CustomDataInput *input) {
    this->permissions = input->readInt();
    if (this->permissions < 0) {

    }
}
