# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/signal_and_slot_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/signal_and_slot_autogen.dir/ParseCache.txt"
  "signal_and_slot_autogen"
  )
endif()
