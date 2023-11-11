# _ZenKit CAPI_

[![Build](https://img.shields.io/github/actions/workflow/status/GothicKit/ZenKitCAPI/build.yml?label=Build&branch=main)](https://img.shields.io/github/actions/workflow/status/GothicKit/phoenix-shared-interface/build.yml)
![License](https://img.shields.io/github/license/GothicKit/ZenKitCAPI?label=License&color=important)
![C++](https://img.shields.io/static/v1?label=C%2B%2B&message=17&color=informational)
![Platforms](https://img.shields.io/static/v1?label=Supports&message=GCC%20|%20MinGW-w64%20|%20Clang%20|%20MSVC%20|%20Apple%20Clang&color=blueviolet)
![Version](https://img.shields.io/github/v/tag/GothicKit/ZenKitCAPI?label=Version&sort=semver)

A C-library wrapping the [ZenKit](https://github.com/GothicKit/ZenKit) library for parsing game assets of
[PiranhaBytes'](https://www.piranha-bytes.com/) early 2000's games [Gothic](https://en.wikipedia.org/wiki/Gothic_(video_game))
and [Gothic II](https://en.wikipedia.org/wiki/Gothic_II). This library is intended to be used as a proxy to _ZenKit_ in
cases where C++ can not be used (i.e. when interfacing with another programming language).

## Building

You will need:

* A working compiler which supports C++17, like GCC 9
* CMake 3.10 or above
* Git

### Basic
To build _ZenKitCAPI_ from scratch, just open a terminal in a directory of your choice and run

```bash
git clone --recursive https://github.com/GothicKit/ZenKitCAPI
cd ZenKitCAPI
cmake -B build -DCMAKE_BUILD_TYPE=Release
cmake --build build
```

You will find the built library in `build/`.

### MinGW

If you want to build with MinGW on Windows, follow these instructions

**Setup**
```sh
choco install mingw
choco install cmake --installargs 'ADD_CMAKE_TO_PATH=User'
```

**Build**  
```sh
cmake -G "MinGW Makefiles" -B build -DCMAKE_BUILD_TYPE=Release
cmake --build build
```
