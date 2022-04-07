# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/qtwritingfiles_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/qtwritingfiles_autogen.dir/ParseCache.txt"
  "qtwritingfiles_autogen"
  )
endif()
