# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/qtqsettings_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/qtqsettings_autogen.dir/ParseCache.txt"
  "qtqsettings_autogen"
  )
endif()
