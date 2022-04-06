# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/qtqbytearrayview_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/qtqbytearrayview_autogen.dir/ParseCache.txt"
  "qtqbytearrayview_autogen"
  )
endif()
