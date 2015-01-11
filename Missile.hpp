#ifndef			Missile_HPP
# define		Missile_HPP

#include "Entity.hpp"

class Missile : public Entity
{
public:
	Missile(int x, int y, Map* map, std::string type);
	Missile(Missile const &);
	Missile &		operator=(Missile const &);
	~Missile();


private:
	Missile();
};

#endif