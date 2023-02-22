#pragma once

#include <common.h>

class Plugin
{
public:
	virtual ~Plugin() = default;

	virtual void init() = 0;
	virtual void shutdown() = 0;
};

typedef Plugin *(*createPluginFunc)();

extern "C"
{
	DLL_EXPORT Plugin *createPlugin();
}

#define EXPORT_PLUGIN(plugin_class_name)                                                           \
	extern "C"                                                                                     \
	{                                                                                              \
		Plugin *createPlugin()                                                                     \
		{                                                                                          \
			return new plugin_class_name;                                                          \
		}                                                                                          \
	}
