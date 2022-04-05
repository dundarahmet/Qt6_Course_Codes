# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/qtqdeleteralwithqlists_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/qtqdeleteralwithqlists_autogen.dir/ParseCache.txt"
  "qtqdeleteralwithqlists_autogen"
  )
endif()
