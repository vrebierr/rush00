#ifndef		AENTITY_HPP
# define	AENTITY_HPP

class AEntity
{
public:
	AEntity(int posX, int posY, char type);
	virtual ~AEntity();

	virtual void	action(int ch) = 0;
	virtual void	move(int x, int y) = 0;
	virtual void	attack() = 0;

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
	AEntity();
	AEntity(AEntity const &);
	AEntity & 	operator=(AEntity const &);
};

#endif