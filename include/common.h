#pragma once

#define DLL_EXPORT __declspec(dllexport)
#define DLL_IMPORT __declspec(dllimport)

#ifdef API_EXPORT
	#define SOME_API DLL_EXPORT
#else
	#define SOME_API DLL_IMPORT
#endif
