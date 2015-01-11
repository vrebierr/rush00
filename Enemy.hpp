#ifndef ENEMY_H
# define ENEMY_H

# include "ACharacter.hpp"

class Enemy : public ACharacter {

public:
	Enemy(int x, int y, Map* map, std::string type);
	Enemy(Enemy const &);
	Enemy &	operator=(Entity const &);
	virtual ~Enemy();

	virtual void		attack();

private:
	Enemy();
};

#endif