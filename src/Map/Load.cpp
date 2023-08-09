#include <Map/Load.h>

SnakeSfml::MapType SnakeSfml::MapUtils::load_from_file(const fs::path& path_to_file)
{
	size_t file_size = 0;
	MapType map;

	std::ifstream file(path_to_file, std::ios::binary);
	if ( !file.is_open() ) {
		return map;
	}

	file.seekg(0, std::ios::end);
	file_size = file.tellg();
	file.seekg(0, std::ios::beg);

	map.resize(file_size/sizeof(ObjectType));
	file.read((char*)map.data(), file_size);

	return map;
}
