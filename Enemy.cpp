#include "Enemy.hpp"

Enemy::Enemy(int x, int y, Map* map, std::string type) : ACharacter(x, y, map, type) {}

Enemy::Enemy(Enemy const & src) {

	*this = src;
}

Enemy &		Enemy::operator=(Entity const & src) {

	this->posX = src.getX();
	this->posY = src.getY();
	this->map = src.getMap();
	this->type = src.getType();
	return *this;
}

Enemy::~Enemy() {}

void			Enemy::attack() {


}
