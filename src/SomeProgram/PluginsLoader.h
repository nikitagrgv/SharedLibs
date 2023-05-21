#pragma once

#include <string>
#include <vector>

class PluginsLoader
{
public:
	explicit PluginsLoader(std::string plugins_path);

	std::vector<std::string> getPluginsNames() const;

private:
	std::string plugins_path_;
};
