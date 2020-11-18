#include "AlmanachCalendarDateMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void AlmanachCalendarDateMessage::deserialize(CustomDataInput *input) {
    this->_dateFunc(input);
}

void AlmanachCalendarDateMessage::_dateFunc(CustomDataInput *input) {
    this->date = input->readInt();
}
