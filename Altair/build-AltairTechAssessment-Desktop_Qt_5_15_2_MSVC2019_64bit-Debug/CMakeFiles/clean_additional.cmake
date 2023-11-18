# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "AltairTechAssessment_autogen"
  "CMakeFiles\\AltairTechAssessment_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\AltairTechAssessment_autogen.dir\\ParseCache.txt"
  )
endif()
