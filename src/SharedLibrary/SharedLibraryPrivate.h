#pragma once

#include <SharedLibrary.h>

class SharedLibrary::SharedLibraryPrivate
{
public:
	SharedLibraryPrivate() = default;
	~SharedLibraryPrivate() = default;

	void someFunction();
	int getValue() const;

private:
	int value_{};
};
