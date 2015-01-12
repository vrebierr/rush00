#include "Entity.hpp"

Entity::Entity() : _posX(0), _posY(0), _type('o') {}

Entity::Entity(int posX, int posY, char type) : _posX(posX), _posY(posY), _type(type) {}




void			Entity::action(int ch) {}

void			Entity::move(int x, int y) {}

void			Entity::attack() {}


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

void			Entity::setX(int x) {

	this->_posX = x;
}

void			Entity::setY(int x) {

	this->_posY = x;
}

void			Entity::setType(char type) {

	this->_type = type;
}
