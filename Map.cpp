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
	this->_map[player->getY()][player->getX()] = player;
	this->_player = player;
}

Map::~Map(void) {}



void			Map::Quit() {

	delete this->_player;
	this->_player = NULL;
	for (int y = 0; y < 25; y++) {

		for (int x = 0; x < 100; x++) {
			delete this->_map[y][x];
		}
		delete [] this->_map[y];
	}
	delete [] this->_map;
	this->_map = NULL;
	std::exit(0);
}

void 			Map::move(int y, int x) {
	this->_player->setY(y);
	this->_player->setX(x);
}

void			Map::updatePlayer(int ch) {
	switch (ch) {
		case KEY_UP: {
			if (this->_player->getY() == 0)
				break;
			this->move(this->_player->getY(), this->_player->getX() - 1);
			break;
		}
		case KEY_DOWN: {
			if (this->_player->getY() == 24)
				break;
			this->move(this->_player->getY(), this->_player->getX() + 1);
			break;
		}
		case KEY_RIGHT: {
			if (this->_player->getX() == 99)
				break;
			this->move(this->_player->getY() + 1, this->_player->getX());
			break;
		}
		case KEY_LEFT: {
			if (this->_player->getX() == 0)
				break;
			this->move(this->_player->getY() - 1, this->_player->getX());
			break;
		}
		case ' ': {
			this->addMissile();
		}
		case 'q': {
			this->Quit();
		}
	}
	flushinp();
}



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

	for (int y = 0; y < 24; y++) {
		for (int x = 0; x < 99; x++) {
			if (this->_map[y][x]->getType() == '>') {
				if (this->_map[y][x + 1]->getType() == '<')
					this->Quit();
			}
			else
				this->_map[y][x]->setType(this->_map[y + 1][x + 1]->getType());
		}
	}

	if (this->_map[rand][99]->getType() == '>')
		this->Quit();
	else
		this->_map[rand][99]->setType('<');
}


void 		Map::addMissile() {
	if (this->_map[this->_player->getY()][this->_player->getX() + 1]->getType() == '<')
    	this->_map[this->_player->getY()][this->_player->getX() + 1]->setType(' ');
    else
    	this->_map[this->_player->getY()][this->_player->getX() + 1]->setType('-');
}
