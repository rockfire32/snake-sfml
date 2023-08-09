#ifndef SNAKE_SFML_INCLUDE_MAP_OBJECTS_H_
#define SNAKE_SFML_INCLUDE_MAP_OBJECTS_H_

#include <cstdint>

namespace SnakeSfml
{
	using ObjectType = uint16_t;

	enum class Object : ObjectType
	{
		NONE,
		WALL,
	};
}

#endif // SNAKE_SFML_INCLUDE_MAP_OBJECTS_H_
