#include "FileLoader.h"
#include "BotCoreException.h"

char *FileLoader::loadFile(std::string path, int *size) {
    FILE *file = fopen(path.c_str(), "rb");
    if (file == nullptr) {
        throw BotCoreException(5);
    }
    fseek(file, 0, SEEK_END);
    int fileSize = ftell(file) + 1;
    fseek(file, 0, SEEK_SET);
    char *buffer = static_cast<char *>(malloc(fileSize));
    if (buffer == nullptr) {
        throw BotCoreException(5);
    }
    fread(buffer, fileSize, 1, file);
    if (ferror(file) == true) {
        free(buffer);
        throw BotCoreException(5);
    }
    fclose(file);
    if (size != nullptr) {
        *size = fileSize;
    }
    return buffer;
}