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
typedef void (*deletePluginFunc)(Plugin *);

extern "C"
{
	DLL_EXPORT Plugin *createPlugin();
	DLL_EXPORT void deletePlugin(Plugin *plugin);
}
