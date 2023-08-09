#ifndef SNAKE_SFML_INCLUDE_MAP_LOAD_H_
#define SNAKE_SFML_INCLUDE_MAP_LOAD_H_

#include <fstream>
#include <filesystem>

#include <Map/Map.h>

namespace SnakeSfml::MapUtils
{
	namespace fs = std::filesystem;

	MapType load_from_file(const fs::path& path_to_file);
}

#endif // SNAKE_SFML_INCLUDE_MAP_LOAD_H_
