# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/QBYTEARRAY_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/QBYTEARRAY_autogen.dir/ParseCache.txt"
  "QBYTEARRAY_autogen"
  )
endif()
