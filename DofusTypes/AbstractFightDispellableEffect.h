#ifndef ABSTRACTFIGHTDISPELLABLEEFFECT_H
#define ABSTRACTFIGHTDISPELLABLEEFFECT_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class AbstractFightDispellableEffect : public DeserializeInterface {
public:
    unsigned int uid = 0;
    double targetId = 0;
    int turnDuration = 0;
    unsigned int dispelable = 1;
    unsigned int spellId = 0;
    unsigned int effectId = 0;
    unsigned int parentBoostUid = 0;

    void deserialize(CustomDataInput *input);

private:
    void _uidFunc(CustomDataInput *input);

    void _targetIdFunc(CustomDataInput *input);

    void _turnDurationFunc(CustomDataInput *input);

    void _dispelableFunc(CustomDataInput *input);

    void _spellIdFunc(CustomDataInput *input);

    void _effectIdFunc(CustomDataInput *input);

    void _parentBoostUidFunc(CustomDataInput *input);
};

#endif