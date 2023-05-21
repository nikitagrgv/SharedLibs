#include "PluginsLoader.h"

#include <filesystem>
#include <iostream>

PluginsLoader::PluginsLoader(std::string plugins_path)
	: plugins_path_(std::move(plugins_path))
{
}

std::vector<std::string> PluginsLoader::getPluginsNames() const
{
	namespace fs = std::filesystem;

	std::vector<std::string> plugins_names;

	for (const auto &entry : fs::directory_iterator(plugins_path_))
	{
		const auto &file_path = entry.path();
		if (file_path.extension() == ".dll")
			plugins_names.push_back(file_path.generic_string());
	}

	return plugins_names;
}
