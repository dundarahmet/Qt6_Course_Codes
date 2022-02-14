# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/exception_handling_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/exception_handling_autogen.dir/ParseCache.txt"
  "exception_handling_autogen"
  )
endif()
