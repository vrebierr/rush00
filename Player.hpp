#ifndef PLAYER_H
# define PLAYER_H
# include "ACharacter.hpp"

class Player : public ACharacter {

public:
	Player(int x, int y, Map* map, std::string type);
	Player(Player const &);
	Player &	operator=(Entity const &);
	virtual ~Player();

	virtual void		attack();
	virtual void		move(e_dir);

private:
	Player();
};

#endif
