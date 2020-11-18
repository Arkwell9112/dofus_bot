#ifndef DOFUS2BOTPREALPHA_0_2_TIMEHELPER_H
#define DOFUS2BOTPREALPHA_0_2_TIMEHELPER_H

#include "chrono"
#include "random"

class TimeHelper {
public:
    static TimeHelper *getInstance();

    unsigned int getRandomWaitTime();

    static bool isTimeElapsed(clock_t point, unsigned int waitTime);

private:
    TimeHelper() = default;

    static TimeHelper *singleton;

    std::default_random_engine engine = std::default_random_engine(
            std::chrono::high_resolution_clock::now().time_since_epoch().count());
    std::uniform_int_distribution<unsigned int> distrib{0, 500};
};


#endif //DOFUS2BOTPREALPHA_0_2_TIMEHELPER_H
