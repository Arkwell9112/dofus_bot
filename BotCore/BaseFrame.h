#ifndef DOFUS2BOTPREALPHA_0_2_BASEFRAME_H
#define DOFUS2BOTPREALPHA_0_2_BASEFRAME_H

#include "Packet.h"

class BaseFrame {
public:
    virtual void Handle(Packet *packet) = 0;

    virtual void Awake() = 0;
};


#endif //DOFUS2BOTPREALPHA_0_2_BASEFRAME_H
