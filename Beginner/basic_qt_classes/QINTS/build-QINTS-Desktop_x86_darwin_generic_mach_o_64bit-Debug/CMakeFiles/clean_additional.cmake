# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/QINTS_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/QINTS_autogen.dir/ParseCache.txt"
  "QINTS_autogen"
  )
endif()
