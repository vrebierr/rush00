#include "Player.hpp"

Player::Player(int x, int y, Map* map, std::string type) : ACharacter(x, y, map, type) {}

Player::Player(Player const & src) {

	*this = src;
}

Player &		Player::operator=(Entity const & src) {

	this->posX = src.getX();
	this->posY = src.getY();
	this->map = src.getMap();
	this->type = src.getType();
	return *this;
}

Player::~Player() {}

void			Player::attack() {


}

void			Player::move(enum dir) {


}