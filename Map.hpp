#ifndef 	MAP_HPP
# define 	MAP_HPP

# include "Player.hpp"

# include <cstdlib>
# include <stdlib.h>

class Map {
    public:
        Map(Player * player);
        ~Map(void);

        Entity      ***getMap() const;
        Player 		*getPlayer() const;

        void		Quit();

        void		updatePlayer(int ch);

        void        setMap(Entity ***entities);
        void		setPlayer(Player *player);

        void        addEntity(Entity *entity);
        void        pushFrame();
        void        addMissile();
        void 		move(int x, int y);


    private:
    	Map();
		Map(Map const & map);
		Map &		operator=(Map const &);

        Entity      ***_map;
        Player 		*_player;

};

#endif
