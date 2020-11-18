#ifndef STATEDELEMENT_H
#define STATEDELEMENT_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class StatedElement : public DeserializeInterface {
public:
    unsigned int elementId = 0;
    unsigned int elementCellId = 0;
    unsigned int elementState = 0;
    bool onCurrentMap = false;

    void deserialize(CustomDataInput *input);

private:
    void _elementIdFunc(CustomDataInput *input);

    void _elementCellIdFunc(CustomDataInput *input);

    void _elementStateFunc(CustomDataInput *input);

    void _onCurrentMapFunc(CustomDataInput *input);
};

#endif