#ifndef 	MAP_HPP
# define 	MAP_HPP

# include "Entity.hpp"
# include "Player.hpp"

# include <cstdlib>

class Map {
    public:
        Map(Player * player);
        ~Map(void);

        Entity      ***getMap() const;
        void        setMap(Entity ***entities);

        void        addEntity(Entity *entity);

    private:
    	Map();
		Map(Map const & map);
		Map &		operator=(Map const &);

        Entity      ***_map;

};

#endif
