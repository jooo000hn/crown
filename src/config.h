/*
 * Copyright (c) 2012-2015 Daniele Bartolini and individual contributors.
 * License: https://github.com/taylor001/crown/blob/master/LICENSE
 */

// Adapted from Branimir Karadžić's config.h (https://github.com/bkaradzic/bx)

#pragma once

#include "platform.h"

#ifndef CROWN_DEBUG
	#define CROWN_DEBUG 0
#endif // CROWN_DEBUG

#if !defined(CROWN_PHYSICS_PHYSX)\
	&& !defined(CROWN_PHYSICS_BULLET)

	#ifndef CROWN_PHYSICS_PHYSX
		#define CROWN_PHYSICS_PHYSX 0
	#endif

	#ifndef CROWN_PHYSICS_BULLET
		#define CROWN_PHYSICS_BULLET 1
	#endif
#else
	#ifndef CROWN_PHYSICS_PHYSX
		#define CROWN_PHYSICS_PHYSX 0
	#endif

	#ifndef CROWN_PHYSICS_BULLET
		#define CROWN_PHYSICS_BULLET 0
	#endif
#endif

#if !defined(CROWN_SOUND_OPENAL) \
	&& !defined(CROWN_SOUND_NULL)

	#ifndef CROWN_SOUND_OPENAL
		#define CROWN_SOUND_OPENAL (CROWN_PLATFORM_LINUX || CROWN_PLATFORM_WINDOWS)
	#endif // CROWN_SOUND_OPENAL

	#ifndef CROWN_SOUND_NULL
		#define CROWN_SOUND_NULL (!CROWN_SOUND_OPENAL || CROWN_PLATFORM_ANDROID)
	#endif // CROWN_SOUND_NULL
#else
	#ifndef CROWN_SOUND_OPENAL
		#define CROWN_SOUND_OPENAL 0
	#endif

	#ifndef CROWN_SOUND_NULL
		#define CROWN_SOUND_NULL 0
	#endif
#endif

#ifndef CROWN_DEFAULT_PIXELS_PER_METER
	#define CROWN_DEFAULT_PIXELS_PER_METER 32
#endif // CROWN_DEFAULT_PIXELS_PER_METER

#ifndef CROWN_DEFAULT_WINDOW_WIDTH
	#define CROWN_DEFAULT_WINDOW_WIDTH 1280
#endif // CROWN_DEFAULT_WINDOW_WIDTH

#ifndef CROWN_DEFAULT_WINDOW_HEIGHT
	#define CROWN_DEFAULT_WINDOW_HEIGHT 720
#endif // CROWN_DEFAULT_WINDOW_HEIGHT

#ifndef CROWN_DEFAULT_CONSOLE_PORT
	#define CROWN_DEFAULT_CONSOLE_PORT 10001
#endif // CROWN_DEFAULT_CONSOLE_PORT

#ifndef CROWN_DATA_DIRECTORY
	#define CROWN_DATA_DIRECTORY "data"
#endif // CROWN_DATA_DIRECTORY

#ifndef CROWN_MAX_JOYPADS
	#define CROWN_MAX_JOYPADS 4
#endif // CROWN_MAX_JOYPADS

#ifndef CE_MAX_SOUND_INSTANCES
	#define CE_MAX_SOUND_INSTANCES 64 // Per world
#endif // CE_MAX

#ifndef CROWN_MAX_DEBUG_LINES
	#define CROWN_MAX_DEBUG_LINES 32768 // Per DebugLine
#endif // CROWN_MAX_DEBUG_LINES

#ifndef CROWN_MAX_LUA_VECTOR3
	#define CROWN_MAX_LUA_VECTOR3 4096
#endif // CE_MAX

#ifndef CROWN_MAX_LUA_MATRIX4X4
	#define CROWN_MAX_LUA_MATRIX4X4 4096
#endif // CE_MAX

#ifndef CROWN_MAX_LUA_QUATERNION
	#define CROWN_MAX_LUA_QUATERNION 4096
#endif // CE_MAX
