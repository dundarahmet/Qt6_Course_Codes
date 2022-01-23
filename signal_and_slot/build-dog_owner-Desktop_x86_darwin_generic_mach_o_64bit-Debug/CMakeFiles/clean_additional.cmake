# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/dog_owner_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/dog_owner_autogen.dir/ParseCache.txt"
  "dog_owner_autogen"
  )
endif()
