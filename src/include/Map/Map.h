#ifndef SNAKE_SFML_INCLUDE_MAP_MAP_H_
#define SNAKE_SFML_INCLUDE_MAP_MAP_H_

#include <cstdlib>
#include <vector>

#include <SFML/System/Vector2.hpp>

#include <Map/Objects.h>

namespace SnakeSfml
{
	class Map
	{
		public:
			void set(const Object object, sf::Vector2i& pos);
			Object get(const sf::Vector2i& pos) const;
	
		private:
			size_t map_max_x_ = 0;
			size_t map_max_y_ = 0;
			std::vector<Object> map_;
	};
}

#endif // SNAKE_SFML_INCLUDE_MAP_MAP_H_
