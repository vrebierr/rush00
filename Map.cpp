#include "Map.hpp"
#include <stdlib.h>
#include <time.h>

Map::Map(Player * player) {

	this->_map = new Entity**[25];
	for (int y = 0; y < 25; y++) {
		this->_map[y] = new Entity*[100];
		for (int x = 0; x < 100; x++) {
			this->_map[y][x] = new Entity();
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



void 		Map::pushFrame() {
	int	rand;

	srand (time(NULL));
	rand = std::rand() % 25;

	for (int y = 0; y < 25; y++) {
		for (int x = 0; x < 99; x++) {
			if (this->_map[y][x]->getType() == '>') {
				if (this->_map[y][x + 1]->getType() == '<')
					exit(0);
			}
			else
				this->_map[y][x] = this->_map[y + 1][x + 1];
		}
	}

	if (this->_map[rand][99]->getType() == '>')
		exit(0);
	else
		this->_map[rand][99]->setType('<');
}


void 		Map::addEntity(Entity *entity) {
    this->_map[entity->getY()][entity->getX()] = entity;
}
