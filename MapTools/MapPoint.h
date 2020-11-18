#ifndef DOFUS2BOTPREALPHA_0_2_MAPPOINT_H
#define DOFUS2BOTPREALPHA_0_2_MAPPOINT_H

class MapPoint {
public:
    unsigned int orientationTo(MapPoint point);

    int getPosX() const;

    int getPosY() const;

    unsigned int getCellId() const;

    unsigned int getOrientation() const;

    void setOrientation(unsigned int orientation);

    MapPoint(int posX, int posY);

    explicit MapPoint(unsigned int cellId);

    MapPoint() = default;

    static bool isValidCoord(int posX, int posY);

private:
    static void initCellPos();

    static MapPoint cellPos[560];
    static bool isInit;

    int posX = 0;
    int posY = 0;
    unsigned int orientation = 8;
    unsigned int cellId = 0;
};

#endif //DOFUS2BOTPREALPHA_0_2_MAPPOINT_H