# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/qtqdeletallwithqmap_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/qtqdeletallwithqmap_autogen.dir/ParseCache.txt"
  "qtqdeletallwithqmap_autogen"
  )
endif()
