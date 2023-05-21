#include "SharedLibrary.h"

#include "PluginsLoader.h"

#include <Plugin.h>

#include <iostream>
#include <windows.h>

int main()
{
	PluginsLoader plugins_loader("plugins");
	for (const auto& plugin_file : plugins_loader.getPluginsNames())
	{
		std::cout << "Plugin: " << plugin_file << std::endl;
	}


	HMODULE library = LoadLibrary("plugins/SomePlugin.dll");
	auto create_func = (createPluginFunc)GetProcAddress(library, "createPlugin");

	Plugin* plugin = create_func();

	plugin->init();
	plugin->shutdown();

	delete plugin;
}
