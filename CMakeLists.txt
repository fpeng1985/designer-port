cmake_minimum_required(VERSION 3.7)
project(designer_port)

#path settings
set(CMAKE_INCLUDE_CURRENT_DIR ON)

#boost
find_package(Boost COMPONENTS system filesystem program_options REQUIRED)
include_directories(SYSTEM ${Boost_INCLUDE_DIRS})

#qt
set(CMAKE_AUTOMOC ON)
find_package(Qt5Widgets REQUIRED)

#compiler settings
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_FLAGS         "$ENV{CXXFLAGS} -Wall -std=c++14")
set(CMAKE_CXX_FLAGS_DEBUG   "${CMAKE_CXX_FLAGS} -O0 -g -ggdb")
set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS} -O3 -DNDEBUG -msse2")

set(SOURCE_FILES main.cpp)
add_executable(designer_port ${SOURCE_FILES})