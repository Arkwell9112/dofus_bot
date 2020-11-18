#include "TimeHelper.h"

TimeHelper *TimeHelper::singleton = nullptr;

TimeHelper *TimeHelper::getInstance() {
    if (singleton == nullptr) {
        singleton = new TimeHelper();
    }
    return singleton;
}

unsigned int TimeHelper::getRandomWaitTime() {
    unsigned int distributed = distrib(engine) + 1500;
    return distributed;
}

bool
TimeHelper::isTimeElapsed(clock_t point, unsigned int waitTime) {
    unsigned int interval = clock() - point;
    if (interval > waitTime) {
        return true;
    }
    return false;
}
