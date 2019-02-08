# CMake for Utils folder #

# Library to be linked with unit tests only #
add_library(test_helpers test_helpers.c)

# Library to hold utils of copper #
add_library(copper_utils
      CStr.cpp
      chop_chop_hash.c
)

add_subdirectory(tests)
