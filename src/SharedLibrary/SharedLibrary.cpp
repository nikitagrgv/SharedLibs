#include "SharedLibrary.h"

#include "SharedLibraryPrivate.h"

SharedLibrary::SharedLibrary()
	: impl_(new SharedLibraryPrivate){};

SharedLibrary::~SharedLibrary() = default;

void SharedLibrary::someFunction()
{
	impl_->someFunction();
}

int SharedLibrary::getValue()
{
	return impl_->getValue();
}
