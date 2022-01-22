# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/timer_example_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/timer_example_autogen.dir/ParseCache.txt"
  "timer_example_autogen"
  )
endif()
