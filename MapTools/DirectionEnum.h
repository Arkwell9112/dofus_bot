#ifndef DOFUS2BOTPREALPHA_0_2_DIRECTIONENUM_H
#define DOFUS2BOTPREALPHA_0_2_DIRECTIONENUM_H

#include "MapPoint.h"

class DirectionEnum {
public:
    const unsigned int RIGHT = 0;
    const unsigned int DOWN_RIGHT = 1;
    const unsigned int DOWN = 2;
    const unsigned int DOWN_LEFT = 3;
    const unsigned int LEFT = 4;
    const unsigned int UP_LEFT = 5;
    const unsigned int UP = 6;
    const unsigned int UP_RIGHT = 7;

    const MapPoint VECTOR_RIGHT = MapPoint(1, 1);
    const MapPoint VECTOR_DOWN_RIGHT = MapPoint(1, 0);
    const MapPoint VECTOR_DOWN = MapPoint(1, -1);
    const MapPoint VECTOR_DOWN_LEFT = MapPoint(0, -1);
    const MapPoint VECTOR_LEFT = MapPoint(-1, -1);
    const MapPoint VECTOR_UP_LEFT = MapPoint(-1, 0);
    const MapPoint VECTOR_UP = MapPoint(-1, 1);
    const MapPoint VECTOR_UP_RIGHT = MapPoint(0, 1);

    MapPoint getVectorFromDirection(unsigned int direction);
};


#endif //DOFUS2BOTPREALPHA_0_2_DIRECTIONENUM_H
