#include "DirectionEnum.h"

MapPoint DirectionEnum::getVectorFromDirection(unsigned int direction) {
    switch (direction) {
        case 0:
            return VECTOR_RIGHT;
        case 1:
            return VECTOR_DOWN_RIGHT;
        case 2:
            return VECTOR_DOWN;
        case 3:
            return VECTOR_DOWN_LEFT;
        case 4:
            return VECTOR_LEFT;
        case 5:
            return VECTOR_UP_LEFT;
        case 6:
            return VECTOR_UP;
        case 7:
            return VECTOR_UP_RIGHT;
    }
    return MapPoint(0, 0);
}