Map::Map(void) {

}

Map::Map(Map const & map) {
    *this = map;
}

Map::~Map(void) {

}

Entity *getEntities(void) {
    return this->_entities;
}

void setEntities(Entity *entities) {
    this->_entities = entities;
}

void pushEntity(Entity entity) {
    this->_entities
}
