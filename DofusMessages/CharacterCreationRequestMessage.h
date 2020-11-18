#ifndef CHARACTERCREATIONREQUESTMESSAGE_H
#define CHARACTERCREATIONREQUESTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class CharacterCreationRequestMessage : public DeserializeInterface {
public:
    std::string name;
    int breed = 0;
    bool sex = false;
    std::vector<int> colors{0, 0, 0, 0, 0};
    unsigned int cosmeticId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _nameFunc(CustomDataInput *input);

    void _breedFunc(CustomDataInput *input);

    void _sexFunc(CustomDataInput *input);

    void _colorsFunc(CustomDataInput *input);

    void _cosmeticIdFunc(CustomDataInput *input);
};

#endif