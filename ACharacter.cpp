#include "ACharacter.hpp"

ACharacter::ACharacter(int x, int y, Map* map, std::string type) : Entity(x, y, map, type) {}

ACharacter::ACharacter(ACharacter const & src) {

	*this = src;
}

ACharacter &		ACharacter::operator=(Entity const & src) {

		this->posX = src.getX();
		this->posY = src.getY();
		this->map = src.getMap();
		this->type = src.getType();
		return *this;
}