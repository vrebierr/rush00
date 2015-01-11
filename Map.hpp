#ifndef MAP_H
# define MAP_H
# include "Entity.hpp"

class Map {
    public:
        Map(void);
        Map(Map const & map);
        ~Map(void);

        Entity      *getEntities(void) const;
        void        setEntities(Entity *entities);
        void        pushEntity(Entity entity);
    private:
        Entity      *_entities;
};

#endif
