# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/qtqsettingfilename_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/qtqsettingfilename_autogen.dir/ParseCache.txt"
  "qtqsettingfilename_autogen"
  )
endif()
