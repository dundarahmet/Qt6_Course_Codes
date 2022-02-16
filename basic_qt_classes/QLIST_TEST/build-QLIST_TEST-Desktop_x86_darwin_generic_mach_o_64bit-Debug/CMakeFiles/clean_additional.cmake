# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/QLIST_TEST_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/QLIST_TEST_autogen.dir/ParseCache.txt"
  "QLIST_TEST_autogen"
  )
endif()
