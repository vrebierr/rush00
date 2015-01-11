#include "Missile.hpp"

Missile::Missile(int x, int y, Map* map, std::string type) : Entity(x, y, map, type) {}

Missile::Missile(Missile const & src) {

	*this = src;
}

Missile &		Missile::operator=(Missile const & src) {

	this->posX = src.posX;
	this->posY = src.posY;
	this->map = src.map;
	this->type = src.type;
}

Missile::~Missile() {}