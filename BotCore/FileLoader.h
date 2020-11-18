#ifndef DOFUS2BOTPREALPHA_0_2_FILELOADER_H
#define DOFUS2BOTPREALPHA_0_2_FILELOADER_H

#include "string"

class FileLoader {
public:
    static char *loadFile(std::string path, int *size);
};


#endif //DOFUS2BOTPREALPHA_0_2_FILELOADER_H
