# Defines the minimum version of CMake
cmake_minimum_required(VERSION 3.10)

# Project Name
set(PROJ_NAME       cpp-modern)

# Add to path folder containing Find<package>.cmake files
list(APPEND CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake")

# Set CMAKE_INSTALL_PREFIX to define install directory
set(CMAKE_INSTALL_PREFIX "${CMAKE_SOURCE_DIR}/install" CACHE PATH "Default Install Path" FORCE)

# Set "Release" as default build type
set(CMAKE_BUILD_TYPE "Debug")

# Define the folder of Includes, libraries and Runtime Files. (.h, .hpp, .ilk, .exe, .dll, .lib, .exp etc.)
set(PROJECT_INCLUDES    "${CMAKE_INSTALL_PREFIX}/include")
set(PROJECT_LIBS        "${CMAKE_INSTALL_PREFIX}/lib")
set(PROJECT_BINARIES    "${CMAKE_INSTALL_PREFIX}/bin")

# Set of Local Variables for location
set(PROJECT_SOURCES         ${CMAKE_SOURCE_DIR}/src)
set(PROJECT_THIRD_PARTIES   ${CMAKE_SOURCE_DIR}/3rdParty)

# Creation of project with call of toolchain
project(${PROJ_NAME})

# Add project's modules
set(CPP_VERSION_11      11)
set(CPP_VERSION_14      14)
set(CPP_VERSION_17      17)

set(PROGRAM_11_NUM01      1-hello-world)
set(PROGRAM_11_NUM02      2-uniform-initialization)

set(PROGRAM_17_NUM01      1-filesystem)

## 11
add_subdirectory(${PROJECT_SOURCES}/${CPP_VERSION_11}/${PROGRAM_11_NUM01})
add_subdirectory(${PROJECT_SOURCES}/${CPP_VERSION_11}/${PROGRAM_11_NUM02})

## 17
add_subdirectory(${PROJECT_SOURCES}/${CPP_VERSION_17}/${PROGRAM_17_NUM01})
