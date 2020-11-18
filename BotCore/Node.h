#ifndef DOFUS2BOTPREALPHA_0_2_NODE_H
#define DOFUS2BOTPREALPHA_0_2_NODE_H

#include "../MapTools/MapPoint.h"

class Node {
public:
    explicit Node(MapPoint position);

    void setCost(MapPoint destination);

    const MapPoint &getPosition() const;

    const MapPoint &getParent() const;

    void setParent(const MapPoint &parent);

    double getCost() const;

private:
    MapPoint position = MapPoint(0, 0);

    MapPoint parent = MapPoint(0, 0);

    double cost = 0;
};


#endif //DOFUS2BOTPREALPHA_0_2_NODE_H
