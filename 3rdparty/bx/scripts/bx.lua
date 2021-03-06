--
-- Copyright 2010-2017 Branimir Karadzic. All rights reserved.
-- License: https://github.com/bkaradzic/bx#license-bsd-2-clause
--

project "bx"
	kind "StaticLib"

	includedirs {
		path.join(BX_DIR, "include"),
	}

	files {
		path.join(BX_DIR, "include/**.h"),
		path.join(BX_DIR, "include/**.inl"),
		path.join(BX_DIR, "src/**.cpp"),
	}

	configuration { "linux-*" }
		buildoptions {
			"-fPIC",
		}

	configuration {}

	if _OPTIONS["with-amalgamated"] then
		excludes {
			path.join(BX_DIR, "src/allocator.cpp"),
			path.join(BX_DIR, "src/bx.cpp"),
			path.join(BX_DIR, "src/commandline.cpp"),
			path.join(BX_DIR, "src/crtnone.cpp"),
			path.join(BX_DIR, "src/debug.cpp"),
			path.join(BX_DIR, "src/dtoa.cpp"),
			path.join(BX_DIR, "src/file.cpp"),
			path.join(BX_DIR, "src/filepath.cpp"),
			path.join(BX_DIR, "src/math.cpp"),
			path.join(BX_DIR, "src/mutex.cpp"),
			path.join(BX_DIR, "src/os.cpp"),
			path.join(BX_DIR, "src/process.cpp"),
			path.join(BX_DIR, "src/semaphore.cpp"),
			path.join(BX_DIR, "src/sort.cpp"),
			path.join(BX_DIR, "src/string.cpp"),
			path.join(BX_DIR, "src/thread.cpp"),
			path.join(BX_DIR, "src/timer.cpp"),
		}
	else
		excludes {
			path.join(BX_DIR, "src/amalgamated.**"),
		}
	end

	configuration {}
