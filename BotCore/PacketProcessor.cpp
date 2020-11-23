#include "PacketProcessor.h"
#include "PacketSender.h"

PacketProcessor *PacketProcessor::singleton = nullptr;

PacketProcessor *PacketProcessor::getInstance() {
    if (PacketProcessor::singleton == nullptr) {
        PacketProcessor::singleton = new PacketProcessor();
    }
    return PacketProcessor::singleton;
}

PacketMarker *
PacketProcessor::retrieveProperMarker(unsigned int address, std::vector<PacketMarker *> *markers, bool isSending) {
    for (int i = 0; i < markers->size(); i++) {
        if (markers->at(i)->getAddress() == address) {
            return markers->at(i);
        }
    }
    auto *marker = new PacketMarker(isSending, address);
    markers->push_back(marker);
    return marker;
}

void PacketProcessor::Process(char *buffer, int len, unsigned int address, bool isSending) {
    if (frame == nullptr) {
        frame = new PrintFrame();
        frame->Awake();
    }
    std::vector<PacketMarker *> *markers = nullptr;
    if (isSending) {
        markers = &this->sendMarkers;
    } else {
        markers = &this->recvMarkers;
    }
    PacketMarker *marker = PacketProcessor::retrieveProperMarker(address, markers, isSending);
    std::vector<Packet *> packets = marker->MarkPackets(buffer, len);
    for (auto packet : packets) {
        if (packet->getInstanceId() > globalInstanceId) {
            globalInstanceId = packet->getInstanceId();
        } else if (packet->getInstanceId() > 0) {
            globalInstanceId++;
            CustomDataInput::CopyAndInvertData(reinterpret_cast<char *>(&globalInstanceId),
                                               &packet->getRealInstanceId()[0], 4);
        }
        this->frame->Handle(packet);
        delete packet;
    }
}

unsigned int PacketProcessor::getGlobalInstanceId() {
    globalInstanceId++;
    return globalInstanceId;
}

void PacketProcessor::changeFrame(BaseFrame *newFrame) {
    frame = newFrame;
    frame->Awake();
}
