#ifndef			ACharacter_HPP
# define		ACharacter_HPP

#include "Entity.hpp"

class ACharacter : public Entity
{
public:
	ACharacter();
	ACharacter(int x, int y, Map* map, std::string type);
	ACharacter(ACharacter const &);
	ACharacter &		operator=(Entity const &);
	virtual ~ACharacter();

	typedef enum {
		UP,
		DOWN,
		RIGHT,
		LEFT
	}		e_dir;

	virtual void		attack() = 0;
	virtual void		move(e_dir) = 0;
};

#endif