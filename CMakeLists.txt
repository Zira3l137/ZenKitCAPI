cmake_minimum_required(VERSION 3.10)
project(czenkit LANGUAGES CXX VERSION 1.3.0)

include(support/BuildSupport.cmake)

set(CMAKE_CXX_STANDARD 17)

option(CZK_ENABLE_ASAN "CZenKit: Enable sanitizers in debug builds." ON)

add_subdirectory(vendor/ZenKit)

list(APPEND _CZK_SOURCES
        src/CutsceneLibrary.cc
        src/Stream.cc
        src/Logger.cc
        src/Vfs.cc
)

bs_select_cflags(${CZK_ENABLE_ASAN} _CZK_OMPILE_FLAGS _CZK_LINK_FLAGS)

add_library(czenkit SHARED)

target_sources(czenkit PRIVATE ${_CZK_SOURCES})
target_include_directories(czenkit PUBLIC include)
target_compile_options(czenkit PRIVATE ${_CZK_OMPILE_FLAGS})
target_compile_definitions(czenkit PRIVATE _CZK_DYN=1)
target_link_options(czenkit PRIVATE ${_CZK_LINK_FLAGS})
target_link_libraries(czenkit PRIVATE zenkit)
set_target_properties(czenkit PROPERTIES CXX_VISIBILITY_PRESET hidden VISIBILITY_INLINES_HIDDEN 1 DEBUG_POSTFIX "d" VERSION ${PROJECT_VERSION})

install(TARGETS czenkit ARCHIVE LIBRARY RUNTIME)
install(DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/include/czenkit" TYPE INCLUDE)
