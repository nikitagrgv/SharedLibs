#pragma once

#include <Plugin.h>

class SomePlugin : public Plugin
{
public:
	SomePlugin();
	~SomePlugin() override;

	void init() override;
	void shutdown() override;
};
