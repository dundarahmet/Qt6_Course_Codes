cmake_minimum_required(VERSION 3.14)

project(qt6_shared_among_object LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 COMPONENTS Core REQUIRED)
find_package(Qt${QT_VERSION_MAJOR} COMPONENTS Core REQUIRED)

add_executable(qt6_shared_among_object
  main.cpp
  cat.h cat.cpp
  toy.h toy.cpp
)
target_link_libraries(qt6_shared_among_object Qt${QT_VERSION_MAJOR}::Core)
