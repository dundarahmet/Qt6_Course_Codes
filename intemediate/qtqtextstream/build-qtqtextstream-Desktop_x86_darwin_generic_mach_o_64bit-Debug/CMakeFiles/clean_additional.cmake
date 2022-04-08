# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/qtqtextstream_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/qtqtextstream_autogen.dir/ParseCache.txt"
  "qtqtextstream_autogen"
  )
endif()
