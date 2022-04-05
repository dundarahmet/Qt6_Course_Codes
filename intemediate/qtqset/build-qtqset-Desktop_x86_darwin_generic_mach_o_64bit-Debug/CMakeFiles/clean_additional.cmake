# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/qtqset_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/qtqset_autogen.dir/ParseCache.txt"
  "qtqset_autogen"
  )
endif()
