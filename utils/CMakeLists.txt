# CMake for Utils folder #

# Library to be linked with unit tests only #
add_library(test_helpers test_helpers.c)

# Library to hold container and data structure code #
add_library(containers 
      char_buf.c
)
