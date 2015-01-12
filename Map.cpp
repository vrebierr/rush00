#include "Map.hpp"

Map::Map(Player * player) {
	
	this->_map = new Entity**[25];
	for (int y = 0; y < 25; y++) {
		this->_map[y] = new Entity*[100];
		for (int x = 0; x < 100; x++) {
			this->_map[y][x] = new Entity();
			this->_map[y][x] = NULL;
		}
	}
	this->_map[13][1] = player;
	this->_player = player;
}

Map::~Map(void) {}


Entity 		***Map::getMap() const {
    return this->_map;
}

Player 		*Map::getPlayer() const {

	return this->_player;
}



void 		Map::setMap(Entity ***map) {
    this->_map = map;
}

void		Map::setPlayer(Player *player) {

	this->_player = player;
}






void 		Map::addEntity(Entity *entity) {
    this->_map[entity->getY()][entity->getX()] = entity;
}
