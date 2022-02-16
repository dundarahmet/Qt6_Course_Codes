# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/QVARIANT_TEST_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/QVARIANT_TEST_autogen.dir/ParseCache.txt"
  "QVARIANT_TEST_autogen"
  )
endif()
