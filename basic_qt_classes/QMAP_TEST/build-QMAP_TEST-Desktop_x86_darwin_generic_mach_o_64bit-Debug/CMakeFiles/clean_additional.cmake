# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/QMAP_TEST_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/QMAP_TEST_autogen.dir/ParseCache.txt"
  "QMAP_TEST_autogen"
  )
endif()
