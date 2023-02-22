#include "SharedLibraryPrivate.h"

void SharedLibrary::SharedLibraryPrivate::someFunction()
{
	value_++;
}

int SharedLibrary::SharedLibraryPrivate::getValue() const
{
	return value_;
}
