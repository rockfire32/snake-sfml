#include <Map/Map.h>

void SnakeSfml::Map::set(const Object object, sf::Vector2i& pos) {
	const size_t i = pos.x + pos.y * map_max_x_;

	if ( i > map_.size() ) {
		return ;
	}

	map_[i] = object;
}

SnakeSfml::Object SnakeSfml::Map::get(const sf::Vector2i& pos) const {
	const size_t i = pos.x + pos.y * map_max_x_;

	if ( i > map_.size() ) {
		return Object::NONE;
	}

	return map_[i];
}
