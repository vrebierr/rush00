#include "Map.hpp"

Map::Map(Player * player) {
	
	this->_map = new Entity**[25];
	for (int y = 0; y < 25; y++) {
		this->_map[y] = new Entity*[100];
		for (int x = 0; x < 100; x++) {
			this->_map[y][x] = new Entity();
			this->_map[y][x]->setType(' ');
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

void			Map::updatePlayer(int ch) {

	if (ch == KEY_UP || ch == KEY_DOWN || ch == KEY_LEFT || ch == KEY_UP)
	{
		if (this->_map[this->_player->getY() - 1][this->_player->getX()]->getType() == '<' ||
			this->_map[this->_player->getY() + 1][this->_player->getX()]->getType() == '<' ||
			this->_map[this->_player->getY()][this->_player->getX() + 1]->getType() == '<' ||
			this->_map[this->_player->getY()][this->_player->getX() - 1]->getType() == '<') {
			Quit();
			}
		else {
			this->_map[this->_player->getY()][this->_player->getX()]->setType(' ');
			this->_player->action(ch);
			this->_map[this->_player->getY()][this->_player->getX()] = this->_player;		
		}
	}
	else if (this->_player->attack(ch) == true)
		this->addMissile();
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






void 		Map::addMissile() {
	if (this->_map[this->_player->getY()][this->_player->getX() + 1]->getType() == '<')
    	this->_map[this->_player->getY()][this->_player->getX() + 1]->setType(' ');
    else
    	this->_map[this->_player->getY()][this->_player->getX() + 1]->setType('-');
}
