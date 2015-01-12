#include "Entity.hpp"

Entity::Entity() : _posX(0), _posY(0), _type(' ') {}

Entity::Entity(int posX, int posY, char type) : _posX(posX), _posY(posY), _type(type) {}

Entity::~Entity() {}


void			Entity::action(int ch) {}

void			Entity::move(int x, int y) {}

bool			Entity::attack(int ch) {
	return true;
}


//	GETTERS


int				Entity::getX() const {

	return this->_posX;
}

int				Entity::getY() const {

	return this->_posY;
}

char			Entity::getType() const {

	return this->_type;
}

//	SETTERS

void			Entity::setY(int y) {

	if (y >= 0 && y < 25)
		this->_posY = y;
}

void			Entity::setX(int x) {

	if (x >= 0 && x < 100)
		this->_posX = x;
}

void			Entity::setType(char type) {

	this->_type = type;
}
