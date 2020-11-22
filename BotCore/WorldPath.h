#ifndef DOFUS2BOTPREALPHA_0_2_WORLDPATH_H
#define DOFUS2BOTPREALPHA_0_2_WORLDPATH_H

#include "WorldNode.h"

class WorldPath {
public:
    WorldPath(MapContext origin, MapContext destination);

    void calculatePath(MapPoint entry);

    static bool isWorldNodeInList(std::vector<WorldNode> list, WorldNode node);

    static void replaceWorldNodeInList(std::vector<WorldNode> *list, WorldNode node, unsigned int testingOrientation);

    static WorldNode getBetterNodeInList(std::vector<WorldNode> *list);

    std::vector<MapContext> reconstructPathInList(std::vector<WorldNode> list);

    std::vector<MapContext> getPath();

private:
    MapContext origin = MapContext((unsigned int) 0);
    MapContext destination = MapContext((unsigned int) 0);
    std::vector<MapContext> path;
};


#endif //DOFUS2BOTPREALPHA_0_2_WORLDPATH_H
