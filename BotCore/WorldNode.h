#ifndef DOFUS2BOTPREALPHA_0_2_WORLDNODE_H
#define DOFUS2BOTPREALPHA_0_2_WORLDNODE_H

#include "../BotCore/MapContext.h"

class WorldNode {
public:
    explicit WorldNode(MapContext position);

    void setEntryPosition(MapPoint entry);

    void setParent(MapContext parent, unsigned int testingOrientation);

    void setCost(MapContext destination, unsigned int additiveCost);

    MapContext getPosition();

    const MapContext &getParent() const;

    const MapPoint &getEntryPosition() const;

    double getCost() const;

    static unsigned int getLogicalMiddle(unsigned int value);

private:
    MapContext position = MapContext((unsigned int) 0);
    MapContext parent = MapContext((unsigned int) 0);
    MapPoint entryPosition = MapPoint(0, 0);
    double cost = 0;
};


#endif //DOFUS2BOTPREALPHA_0_2_WORLDNODE_H
