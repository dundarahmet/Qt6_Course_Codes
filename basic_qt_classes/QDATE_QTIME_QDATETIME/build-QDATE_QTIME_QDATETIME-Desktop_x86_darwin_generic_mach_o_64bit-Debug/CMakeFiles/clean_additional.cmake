# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/QDATE_QTIME_QDATETIME_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/QDATE_QTIME_QDATETIME_autogen.dir/ParseCache.txt"
  "QDATE_QTIME_QDATETIME_autogen"
  )
endif()
