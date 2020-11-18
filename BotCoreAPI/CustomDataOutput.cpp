#include "BotCoreAPI.h"

void CustomDataOutput::writeBytes(char *inputBuffer, int len) {
    memcpy(&this->buffer[this->position], inputBuffer, len);
    this->position += len;
}

void CustomDataOutput::writePacketSizeSize(unsigned int packetSize, unsigned int packetSizeSize) {
    CustomDataInput::CopyAndInvertData(reinterpret_cast<char *>(&packetSize), &this->buffer[this->position],
                                       (int) packetSizeSize);
    this->position += packetSizeSize;
}

void CustomDataOutput::writeUnsignedShort(unsigned short value) {
    CustomDataInput::CopyAndInvertData(reinterpret_cast<char *>(&value), &this->buffer[this->position], 2);
    this->position += 2;
}

CustomDataOutput::CustomDataOutput(char *buffer) {
    this->buffer = buffer;
}

void CustomDataOutput::writeUnsignedInt(unsigned int value) {
    CustomDataInput::CopyAndInvertData(reinterpret_cast<char *>(&value), &this->buffer[this->position], 4);
    this->position += 4;
}

unsigned int CustomDataOutput::getPosition() {
    return this->position;
}

void CustomDataOutput::writeDouble(double value) {
    CustomDataInput::CopyAndInvertData(reinterpret_cast<char *>(&value), &this->buffer[this->position], 8);
    this->position += 8;
}

void CustomDataOutput::writeBoolean(bool value) {
    if (value) {
        this->writeUnsignedByte(1);
    } else {
        this->writeUnsignedByte(0);
    }
}

void CustomDataOutput::writeUnsignedByte(unsigned char value) {
    CustomDataInput::CopyAndInvertData(reinterpret_cast<char *>(&value), &this->buffer[this->position], 1);
    this->position += 1;
}
