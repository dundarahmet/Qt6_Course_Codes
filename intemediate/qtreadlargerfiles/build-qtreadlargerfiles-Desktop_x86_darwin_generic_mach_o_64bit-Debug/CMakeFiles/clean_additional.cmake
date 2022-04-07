# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/qtreadlargerfiles_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/qtreadlargerfiles_autogen.dir/ParseCache.txt"
  "qtreadlargerfiles_autogen"
  )
endif()
