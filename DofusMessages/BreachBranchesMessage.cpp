#include "BreachBranchesMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/ExtendedBreachBranch.h"

#include "../DofusTypes/BreachBranch.h"

void BreachBranchesMessage::deserialize(CustomDataInput *input) {
    unsigned int _id1 = 0;
    ExtendedBreachBranch _item1;
    unsigned int _branchesLen = input->readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _branchesLen; _i1++) {
        _id1 = input->readUnsignedShort();
        _item1 = *dynamic_cast<ExtendedBreachBranch *>(ProtocolTypeManager::getInstance(_id1, input));
        ProtocolTypeManager::deleteLastInstance();

        this->branches.push_back(_item1);
    }
}

void BreachBranchesMessage::_branchesFunc(CustomDataInput *input) {
    unsigned int _id = input->readUnsignedShort();
    ExtendedBreachBranch _item;
    _item.deserialize(input);
    this->branches.push_back(_item);
}
