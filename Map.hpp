#ifndef 	MAP_HPP
# define 	MAP_HPP

# include "Player.hpp"

# include <cstdlib>

class Map {
    public:
        Map(Player * player);
        ~Map(void);

        Entity      ***getMap() const;
        Player 		*getPlayer() const;

        void        setMap(Entity ***entities);
        void		setPlayer(Player *player);

        void        addEntity(Entity *entity);

    private:
    	Map();
		Map(Map const & map);
		Map &		operator=(Map const &);

        Entity      ***_map;
        Player 		*_player;

};

#endif
