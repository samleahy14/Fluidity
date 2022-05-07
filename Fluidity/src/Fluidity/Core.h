#pragma once

#ifdef FL_PLATFORM_WINDOWS
	#ifdef FL_BUILD_DLL
		#define FLUIDITY_API __declspec(dllexport)
	#else
		#define FLUIDITY_API __declspec(dllimport)
	#endif
#else
	#error Fluidity only supports Windows!
#endif