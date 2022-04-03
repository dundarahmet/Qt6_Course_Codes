cmake_minimum_required(VERSION 3.14)

project(signal_and_slot LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 COMPONENTS Core REQUIRED)
find_package(Qt${QT_VERSION_MAJOR} COMPONENTS Core REQUIRED)

add_executable(signal_and_slot
  main.cpp
  source.h
  source.cpp
  destination.h
  destination.cpp
)
target_link_libraries(signal_and_slot Qt${QT_VERSION_MAJOR}::Core)
