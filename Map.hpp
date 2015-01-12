#ifndef 	MAP_HPP
# define 	MAP_HPP

# include "AEntity.hpp"
# include "Player.hpp"

# include <cstdlib>

class Map {
    public:
        Map(Player * player);
        ~Map(void);

        AEntity      ***getMap(void) const;
        void        setMap(AEntity ***entities);

        void        addEntity(AEntity *entity);

    private:
    	Map();
		Map(Map const & map);
		Map &		operator=(Map const &);

        AEntity      ***_map;

};

#endif
