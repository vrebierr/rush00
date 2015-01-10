#ifndef			ENTITY_HPP
# define		ENTITY_HPP

class Entity
{
public:
	Entity(int x, int y);
	Entity(Entity const &);
	Entity & 	operator=(Entity const &);
	virtual ~Entity();

	//	GETTERS

	int		getX();
	int		getY();
	Map*	getMap();

	//	SETTERS

	void	setX(int);
	void	setY(int);
	void	setMap(Map* map);

protected:
	Map		*map;
	int		posX;
	int		posY;

private:
	Entity();
};


#endif