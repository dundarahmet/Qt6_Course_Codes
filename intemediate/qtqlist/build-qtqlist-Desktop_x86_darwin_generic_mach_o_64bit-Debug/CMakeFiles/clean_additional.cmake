# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/qtqlist_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/qtqlist_autogen.dir/ParseCache.txt"
  "qtqlist_autogen"
  )
endif()
