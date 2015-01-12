#include "Map.hpp"

Map::Map(Player * player) {

	this->_map = AEntity 	*tab[25][100];
	for (int y = 0; y < 25; y++) {

		for (int x = 0; x < 100; x++) {

			this->_map[y][x] = NULL;
		}
	}
	this->_map[13][1] = player;
}

Map::~Map(void) {}


AEntity 	Map::***getMap() const {
    return this->_map;
}

void 		Map::setMap(AEntity ***map) {
    this->_map = map;
}

void 		Map::addEntity(AEntity *entity) {
    this->_map[entity->getY()][entity->getX()] = entity;
}
