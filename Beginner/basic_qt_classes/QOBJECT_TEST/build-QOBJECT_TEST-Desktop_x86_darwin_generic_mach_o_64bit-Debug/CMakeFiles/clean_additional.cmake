# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/QOBJECT_TEST_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/QOBJECT_TEST_autogen.dir/ParseCache.txt"
  "QOBJECT_TEST_autogen"
  )
endif()
