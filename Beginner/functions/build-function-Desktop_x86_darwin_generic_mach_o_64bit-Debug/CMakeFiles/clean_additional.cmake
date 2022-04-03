# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/function_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/function_autogen.dir/ParseCache.txt"
  "function_autogen"
  )
endif()
