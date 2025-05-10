# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\smart-eco-city_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\smart-eco-city_autogen.dir\\ParseCache.txt"
  "smart-eco-city_autogen"
  )
endif()
