#include "BotCoreAPI.h"

bool BooleanByteWrapper::getFlag(unsigned int box, unsigned int index) {
    unsigned int value = box & (1 << index);
    if (box != 0) {
        return true;
    }
    return false;
}