#include "Entity.hpp"

Entity::Entity(int x, int y) : posX(x), posY(y) {}

Entity::Entity(Entity const & src) {

	*this = src;
}

Entity &		Entity::operator=(Entity const & src) {

	if (this != &src) {

		this->posX = src.posX;
		this->posY = src.posY;
		this->map = src.map;
	}
	return *this;
}



//		GETTERS

int				Entity::getX() {

	return this->posX;
}

int				Entity::getY() {

	return this->posY;
}

Map*			Entity::getMap() {

	return this->map;
}

//		SETTERS

void			Entity::setX(int x) {

	this->posX = x;
}

void			Entity::setY(int x) {

	this->posY = x;
}

void			Entity::setMap(Map* map) {

	this->map = map;
}