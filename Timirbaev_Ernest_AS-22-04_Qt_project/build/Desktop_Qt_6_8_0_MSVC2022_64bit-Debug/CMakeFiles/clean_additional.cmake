# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\Timirbaev_Ernest_AS-22-04_Qt_project_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Timirbaev_Ernest_AS-22-04_Qt_project_autogen.dir\\ParseCache.txt"
  "Timirbaev_Ernest_AS-22-04_Qt_project_autogen"
  )
endif()
