#ifndef DOFUS2BOTPREALPHA_0_2_MOVEMENTPATH_H
#define DOFUS2BOTPREALPHA_0_2_MOVEMENTPATH_H

#include "MapPoint.h"
#include "vector"

class MovementPath {
public:
    MovementPath(std::vector<MapPoint> points);

    void compressPath();

    std::vector<unsigned int> toServerMovements();

private:
    MapPoint start = MapPoint(0, 0);
    MapPoint end = MapPoint(0, 0);
    std::vector<MapPoint> path;
};


#endif //DOFUS2BOTPREALPHA_0_2_MOVEMENTPATH_H
