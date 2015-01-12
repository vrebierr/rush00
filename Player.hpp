#ifndef		PLAYER_HPP
# define	PLAYER_HPP

# include "Entity.hpp"
# include <curses.h>

class Player : public Entity
{
public:
	Player(int x, int y, char type);
	virtual ~Player();

	virtual void	action(int ch);
	virtual void	move(int x, int y);
	virtual void	attack();

private:
	Player();
};

#endif