#ifndef DOFUS2BOTPREALPHA_0_2_MAPCONTEXT_H
#define DOFUS2BOTPREALPHA_0_2_MAPCONTEXT_H

#include "FileLoader.h"
#include "vector"
#include "../MapTools/MapPoint.h"
#include "../MapTools/DirectionEnum.h"
#include "Node.h"
#include "BotCoreException.h"

class MapContext {
public:
    explicit MapContext(unsigned int mapId);

    MapContext(short posX, short posY);

    std::vector<MapPoint> findPath(MapPoint origin, MapPoint destination);

    unsigned int getMapId() const;

    short getPosX() const;

    short getPosY() const;

    short getSubAreaId() const;

    short getWorldMap() const;

    std::vector<MapPoint> getOpenBorderCells(unsigned int orientation);

    unsigned int getNeighborId(unsigned int orientation);

    MapPoint getPlayerPos();

    void setPlayerPos(MapPoint _playerPos);

    unsigned int getNeighborIdForChange(unsigned int direction);

    bool isOutdoor() const;

    bool isHasPriorityOnWorldMap() const;

    static unsigned int getTopNeighborIdOffset();

    static unsigned int getRightNeighborIdOffset();

    static unsigned int getBottomNeighborIdOffset();

    static unsigned int getLeftNeighborIdOffset();

    static bool isNodeinList(std::vector<Node> list, Node node);

    static void replaceNodeInList(std::vector<Node> *list, Node node);

    static Node getBetterNodeInList(std::vector<Node> *list);

    static std::vector<MapPoint> reconstructPathInList(std::vector<Node> list, MapPoint origin, MapPoint destination);

    static const unsigned int mapIdOffset = 0;
    static const unsigned int posXOffset = 4;
    static const unsigned int posYOffset = 6;
    static const unsigned int subAreaIdOffset = 8;
    static const unsigned int worldMapOffset = 10;
    static const unsigned int topNeighborIdOffset = 12;
    static const unsigned int rightNeighborIdOffset = 16;
    static const unsigned int bottomNeighborIdOffset = 20;
    static const unsigned int leftNeighborIdOffset = 24;
    static const unsigned int box0Offset = 28;
    static const unsigned int cellsOffset = 30;
    static const unsigned int blockSize = 590;
private:
    explicit MapContext(char *directDataPointer);

    unsigned int mapId = 0;
    char *cellsData = nullptr;
    short posX = -1000;
    short posY = -1000;
    short subAreaId = -1;
    short worldMap = -100;
    bool outdoor = false;
    bool hasPriorityOnWorldMap = false;
    unsigned int topNeighborId = 0;
    unsigned int rightNeighborId = 0;
    unsigned int bottomNeighborId = 0;
    unsigned int leftNeighborId = 0;

    MapPoint playerPos = MapPoint(0);

    static char *mapsData;
    static int mapsDataSize;
};


#endif //DOFUS2BOTPREALPHA_0_2_MAPCONTEXT_H
