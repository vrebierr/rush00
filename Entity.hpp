#ifndef			ENTITY_HPP
# define		ENTITY_HPP

# include <iostream>

//# include "Map.hpp"

class Entity
{
public:
	Entity();
	Entity(int x, int y, Map* map, std::string const & type);
	Entity(Entity const &);
	Entity & 	operator=(Entity const &);
	virtual ~Entity();

	//	GETTERS

	int		getX() const;
	int		getY() const;
	Map*	getMap() const;
	std::string		getType() const;

	//	SETTERS

	void	setX(int);
	void	setY(int);
	void	setMap(Map* map);
	void	setType(std::string const &);

protected:
	int		posX;
	int		posY;
	Map		*map;
	std::string	type;
};


#endif