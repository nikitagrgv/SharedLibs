#include "SharedLibrary.h"

#include <Plugin.h>

#include <iostream>
#include <windows.h>

int main()
{
	HMODULE library = LoadLibrary("plugins/SomePlugin.dll");
	auto create_func = (createPluginFunc)GetProcAddress(library, "createPlugin");
	auto delete_func = (deletePluginFunc)GetProcAddress(library, "deletePlugin");

	Plugin* plugin = create_func();

	plugin->init();
	plugin->shutdown();

	delete_func(plugin);
}
