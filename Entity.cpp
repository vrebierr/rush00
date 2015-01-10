#include "Entity.hpp"

Entity::Entity(int x, int y, Map* map, std::string const & type) : posX(x), posY(y), map(map), type(type) {}

Entity::Entity(Entity const & src) {

	*this = src;
}

Entity &		Entity::operator=(Entity const & src) {

	if (this != &src) {

		this->posX = src.posX;
		this->posY = src.posY;
		this->map = src.map;
		this->type = type;
	}
	return *this;
}



//		GETTERS

int				Entity::getX() const {

	return this->posX;
}

int				Entity::getY() const {

	return this->posY;
}

Map*			Entity::getMap() const {

	return this->map;
}

std::string		Entity::getType() const {

	return this->type;
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

void			Entity::setType(std::string const & type) {

	this->type = type;
}



