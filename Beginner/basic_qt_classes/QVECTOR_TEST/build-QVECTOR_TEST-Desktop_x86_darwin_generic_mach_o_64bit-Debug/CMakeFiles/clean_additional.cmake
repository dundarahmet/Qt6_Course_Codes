# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/QVECTOR_TEST_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/QVECTOR_TEST_autogen.dir/ParseCache.txt"
  "QVECTOR_TEST_autogen"
  )
endif()
