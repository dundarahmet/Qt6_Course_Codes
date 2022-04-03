# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/Proprety_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/Proprety_autogen.dir/ParseCache.txt"
  "Proprety_autogen"
  )
endif()
