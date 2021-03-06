#ifndef		ENTITY_HPP
# define	ENTITY_HPP

class Entity
{
public:
	Entity();
	Entity(int posX, int posY, char type);
	~Entity();

	virtual void	action(int ch);
	virtual void	move(int x, int y);
	virtual bool	attack(int ch);

	//	GETTERS

	int				getX() const;
	int				getY() const;
	char			getType() const;

	//	SETTERS

	void			setX(int);
	void			setY(int);
	void			setType(char);

protected:
	int				_posX;
	int				_posY;
	char			_type;


private:
	Entity(Entity const &);
	Entity & 	operator=(Entity const &);
};

#endif