#ifndef		PLAYER_HPP
# define	PLAYER_HPP

# include "AEntity.hpp"

class Player : public AEntity
{
public:
	Player(int x, int y, char type);
	virtual ~Player();

	virtual void	action(int ch);
	virtual void	move(int x, int y);
	virtual void	attack();
};

#endif