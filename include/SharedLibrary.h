#pragma once

#include "common.h"

#include <memory>

class SharedLibrary
{
public:
	SOME_API SharedLibrary();
	SOME_API ~SharedLibrary();

	SOME_API void someFunction();
	SOME_API int getValue();

private:
	class SharedLibraryPrivate;
	std::unique_ptr<SharedLibraryPrivate> impl_;
};
