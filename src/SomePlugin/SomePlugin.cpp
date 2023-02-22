#include "SomePlugin.h"

#include <iostream>

EXPORT_PLUGIN(SomePlugin)

SomePlugin::SomePlugin()
{
	std::cout << "SomePlugin constructor\n";
}

SomePlugin::~SomePlugin()
{
	std::cout << "SomePlugin destructor\n";
}

void SomePlugin::init()
{
	std::cout << "Hello, I'm SomePlugin!\n";
}

void SomePlugin::shutdown()
{
	std::cout << "Goodbye SomePlugin\n";
}
