#ifndef HAVENBAGFURNITURESREQUESTMESSAGE_H
#define HAVENBAGFURNITURESREQUESTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class HavenBagFurnituresRequestMessage : public DeserializeInterface {
public:
    std::vector<unsigned int> cellIds;
    std::vector<int> funitureIds;
    std::vector<unsigned int> orientations;

    void deserialize(CustomDataInput *input);

private:
    void _cellIdsFunc(CustomDataInput *input);

    void _funitureIdsFunc(CustomDataInput *input);

    void _orientationsFunc(CustomDataInput *input);
};

#endif