#include "AEntity.hpp"

AEntity::AEntity(int posX, int posY, char type) : _posX(posX), _posY(posY), _type(type) {}


//	GETTERS


int				AEntity::getX() const {

	return this->_posX;
}

int				AEntity::getY() const {

	return this->_posY;
}

char			AEntity::getType() const {

	return this->_type;
}

//	SETTERS

void			AEntity::setX(int x) {

	this->_posX = x;
}

void			AEntity::setY(int x) {

	this->_posY = x;
}

void			AEntity::setType(char type) {

	this->_type = type;
}