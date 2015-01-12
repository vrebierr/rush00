#include "Player.hpp"

Player::Player(int x, int y, char type) : Entity(x, y, type) {}


void			Player::attack() {}

void			Player::action(int key) {

	if (key == 32)
		this->attack();
	else {
		switch (key) {

			case KEY_UP: {
				this->move(0, -1);
				break;
			}
			case KEY_DOWN: {
				this->move(0, 1);
				break;
			}
			case KEY_RIGHT: {
				this->move(1, 0);
				break;
			}
			case KEY_LEFT: {
				this->move(-1, 0);
				break;
			}
		}
	}
	flushinp();
}

void			Player::move(int x, int y) {

	this->_posX += x;
	this->_posY += y;
}